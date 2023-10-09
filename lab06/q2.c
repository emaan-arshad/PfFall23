//programmer: Emaan Arshad
/// date:3/10/23
///descr: To print fibonnaci series till number 10000 and to print sum of numbers in fibbonacci esries div by 3,5, or 7:


#include <stdio.h>

int main()
{
    int i=0;
    int k=0;
    int sum=0;
    int j=1;
      printf("1\n");
     for(k=0;k<6000;k=k) {
      k=i+j;
      printf("%d \n",k); //printing series
      i=j;
      j=k;
      if(k%3==0 || k%5==0 || k%7==0) {  /// checking for multiples of 3,5,7
          sum=sum +k;
      }
     
     }  
     printf("the sum of numbers divisble by 3,5 or 7 is %d", sum);/// printing sum
       return 0;
}



