/////programmer:Emaan Arshad
///date:3/10/23
////desc:QUESTION# 05
////W rite a C program that produces the following output:

0 0 0 0

  1 1

2 2 2 2

  3 3

4 4 4 4

  5 5

6 6 6 6//////////

///printing only using single lopp till 6///
#include <stdio.h>

int main()
{
    
    for(int i =0;i<=6;i++) {
        if (i%2==0) {
            printf("%d  %d  %d  %d\n",i,i,i,i);//if even print 4 times
        }
        else   { 
            printf("   %d  %d\n",i,i);if odd print 2 timesin center
        }
    }////endfor(int i =0;i<=6;i++)
   
        

    return 0;
}    

  
