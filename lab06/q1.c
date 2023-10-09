//Programmer: Emaan Arshad
//date: 3/10/23
//descr: q1 lab 06 checking for a perfect number:




#include <stdio.h>

int main() {
  int N;
  int a=0;
  printf("enter a positive number to check if its perfect number:");
  scanf("%d",&N);

  for(int i=1; i<N ;i = i + 1 ) {
    if (N%i==0) {
        a=i+a;
    }//end for(int i=1; i<N ;i = i + 1 )
   }
   if (a==N) {
       printf("your number is perfect");
   }
   if (a!=N) {
       printf("it is not a perfect number");
   }
    return 0;
}
