//Programmer: Emaan Arshad
//to swap higherfour bits with lower foour bits

/******************************************************************************

      

#include <stdio.h>

int main()
{
    int N,n;
    printf("please enter a 8 bit number: ");
     scanf("%d",&N);
     
    int a =N>>4;
    int b =N<<4;
    n = a | b;
    printf("after replacing higher four digits with lower four dighits number becomes: %d", n);
   
   
    return 0;
}
