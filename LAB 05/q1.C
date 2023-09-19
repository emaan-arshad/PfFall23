P

#include <stdio.h>

int main()
{
    
   int N; 
    printf("input a integer greater than 0 : ");
    scanf("%d",&N);
    int  ans = N % 3;
    if (ans==0) {
        printf("This number is multiple of 3");
    }
    else {
            printf("number is not a multiple of 3");
    }
        
    
    

   return 0;
}

