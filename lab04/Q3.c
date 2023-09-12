#include <stdio.h>
#include <math.h>

int main() {
     int N;
     int ans = 0;
     int i = 1;
     int a;
    
     printf("input number of values: ");
     scanf("%d",&N);
     while (i<=N) {
            int a;
            printf("input ur number: ");
            scanf("%d",&a);
            ans = ans + (a * a);
            i = i + 1;
     }
     printf("%d",ans);      
     
          
      
      return 0;
}