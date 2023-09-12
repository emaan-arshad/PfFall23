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
    