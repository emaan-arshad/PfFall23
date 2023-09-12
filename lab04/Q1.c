//programmer:Emaan Arshad 23I-2560
//date: 9/12/2023
//decription:Printing the pattern for any number of n.for example for n=4.
//*
//**
//***
//****


#include <stdio.h>
#include <math.h>

int main() {
     int N;
     int i = 1;
    
     printf("input an positive integer: ");
     scanf("%d",&N);
     while (i<=N) {
            int j = 0;
            while (j<i) {
                  printf("*");
                  j = j + 1;
            }//endwhile(j<i)
            printf("\n");
            i = i + 1;
      }//end while(i<=N)
      return 0;
}
    
