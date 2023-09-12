//programmer: Emaan Arshad (23I-2560)
//date: 9/12/23
//description:. Write a program that asks user for a number n, then asks for n more integers and prints the sum of their squares.



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
     }//end while(i<=N)
     printf("%d",ans);      
     
          
      
      return 0;
}
