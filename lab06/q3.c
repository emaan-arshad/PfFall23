///programmer:Emaan Arshad
///date:3/10/23
///descr:Write a C Program to compute the LCM and GCD of two numbers.


////to fin LCM:////////
#include <stdio.h>

int main()
{
    int N1,N2;
    int i=2;
    int k=0;
    int sum=0;
    int j=1;
    printf("enter two numbers \n enter your first number:");
    scanf("%d",&N1);//first num
    printf(" \n enter your second number:");
    scanf("%d",&N2);//sec number
    if (N1>N2) {
        i=N1;
    }
    if (N2>N1) {
        i=N2;
    }////checking which one is greater
   
   
        while (i<=N1*N2 ) {
            if(i%N1==0 && i%N2==0) {
                printf("the least common multiple is %d",i);
                break;///when found break
            } else {
                 // =i+1;
            }
            i = i+1;
       
          }//end while(i<=N1*N2 ) 
         
}





//////To find GCD://////



#include <stdio.h>

int main()
{
    int N1,N2;
    int i=2;
    int k=0;
    int sum=0;
    int j=2;
    printf("enter two numbers \n enter your first number:");
    scanf("%d",&N1);
    printf(" \n enter your second number:");
    scanf("%d",&N2);
    if (N1>N2) {
        i=N1;
    }
    if (N2>N1) {
        i=N2;
    }
       while (i>0) {
            if(N1%i==0 && N2%i==0) {
                printf("the greatest common divisor is %d",i);
                break;
            } else {
                 // =i+1;
            }
            i = i-1;
       
          }
   
       
         
}

