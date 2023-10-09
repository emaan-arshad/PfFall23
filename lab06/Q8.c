///programmer: Emaan Arshad
/// date:5/10/23
///desc:inverse array

#include <stdio.h>

int main()
{
  
  //int i=0;
  
  
   
   int N,a;
   int sum =0;
   printf("Enter size of your array: ");
   scanf("%d",&N);
   
   int arr[N];
   for(int i =0;i<N;i++) {
       printf("Enter value number %d for your array: ",i+1);
       scanf("%d",&arr[i]);
      
       
   }
   int array[N];
     for (int j=0;j<=N/2;j++) {
         a=arr[j];
         array[j]=arr[N-(j+1)];
         array[N-(j+1)]=arr[j];
         
     }
     printf("your reverse array becomes :\n{");
     for(int j=0; j<N;j++) {
         printf("%d ",array[j]);
         
     }
     printf("}");
     //printf("sum of your values is %d",sum);
   
   
   
    

    return 0;
}
