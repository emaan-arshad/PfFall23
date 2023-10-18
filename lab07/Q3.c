
//programmer:Emaan Arshad
//date:10/10/23
//desc: sum  of digits of a number


#include <stdio.h>

int main (){
int N, digit;
  int sum=0;

  printf ("Enter a number: ");
  scanf ("%d" ,&N);

while (N) {
digit = N % 10;
N /= 10;
  sum += digit;
}
  

printf ("The sum of digits  is : %d" ,sum);

return 0;
}










