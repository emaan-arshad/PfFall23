//programmer:Emaan Arshad
//date:12/10/23
//desc:to find out  a subarray whose sum is equal o a given number



#include <stdio.h>
#include <stdbool.h>
int main()
{
    int size,S;
    
    printf("please enter size of your array: ");
    scanf("%d",&size);

 int arr[size];
   for(int i=0;i<size;i++) {
 printf("please enter element no : %d  ",i+1);
      scanf("%d",&arr[i]);
    }
    
    
    printf("please enter the number which the elements of subarray shoud sum to: ");
    scanf("%d",&S);
    
    printf("{");
    for(int i=0;i<size;i++) {
      printf(" %d",arr[i]);
    }
    printf("}");
    
    int index,index2;
    int sum=0;
     bool flag=false;
    for(int a=0;a<size;a++) {
   
    for(int i=a;sum<S;i++) {
        
        sum+=arr[i];
        if (sum == S) {
            index=a;
            index2=i;
            flag =true;
            break;
        }
        
    }
     if  (flag==true) {
         break;
     }
    sum=0;
    
    }
    
    if  (flag==true) {
    printf("\nThe Elements from Index %d to %d when summed results in the output of %d.",index,index2,S);
    //for(int i=0;i)
    }
    else {
        printf("No such continuous sub array found");
    }
    
    return 0;
}//end main
