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
            }
            printf("\n");
            i = i + 1;
      }
      return 0;
}
    