///programmer:Emaan Arshad
///date:5/10/23
///descr:print sum of arrays values




#include <stdio.h>

int main()
{
  
  //int i=0;
  
  
   
   int N;
   int sum =0;
   printf("Enter size of your array: ");
   scanf("%d",&N);
   
   int arr[100]={0};
   for(int i =0;i<N;i++) {
       printf("Enter value number %d for your array: ",i+1);
       scanf("%d",&arr[i]);
       sum =sum + arr[i];
       
   }
   
   printf("sum of your values is %d",sum);
   
   
   
    

    return 0;
}
