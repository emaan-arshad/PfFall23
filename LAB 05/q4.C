#include <stdio.h>
#include <string.h>

int main()
{
    int op;
    float ans;
    float a;
    float b;
    
    printf ("Enter 1st number and second number: \n");
    scanf ("%f %f" ,&a,&b);
    
    
    printf ("Enter the  arithmetic operation you want to do \n press 1 for addition \n oress 2 for subtraction \n press 3 for multiplucation \n press 4 for division \n =");
    scanf ("%d" ,&op);
    switch (op) {
            case 1:
                ans = a + b;
                printf ("Your ans is: %f" , ans);
                break;
            case 2:
                ans = a - b;
                printf ("Your ans is: %f" , ans);
                 break;
            case 3:
                ans = a* b;
                 printf ("Your ans is  %f" , ans);
                 break;
            case 4: 
            
                  ans = a/b;
                  printf ("your ans is %f",ans);
                   break;
            default:
                 printf("wrong input");
     }
    return 0;

}    
  
