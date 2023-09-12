//programmer:Emaan Arshad 23I-2560
//date: 9/12/2023
//desription Printing the pattern for any number of n. Below is an example for n=4.
****
****
****
****




#include <stdio.h>
#include <math.h>

int main() {
     int N;
     int a = N;
    
     printf("input a positive integer: ");
     scanf("%d",&N);
     while (a>0) {
            
            while (N>0) {
                  printf("*");
                  N = N - 1;
            }
            
            a = a - 1;
 	    printf("\n");
      }
      return 0;
}
    
