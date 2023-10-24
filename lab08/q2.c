//programmer:Emaan Arshad
//date:24/10/23
//desc: calculator function





#include <stdio.h>

   void cal(float a,float b,char c) ;
    

int main() {
    float a;
    float b;
   int  c;
    printf ("Enter 1st number and second number: \n");
    scanf ("%f %f" ,&a,&b);
    
    
    printf ("Enter the  arithmetic operation you want to do \n press 1 for addition \n press 2 for subtraction \n press 3 for multiplucation \n press 4 for division \n ");
    scanf ("%d" ,&c);
    
    cal(a,b,c);
    
    
    
    
}

void cal(float a,float b,char c) {
    
    
   float ans;
    switch (c) {
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
            printf("invalid choice");
                 
     }
    return ;
}
 
