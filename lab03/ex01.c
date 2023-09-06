#include <stdio.h>
#include <math.h>
int main() {
        int NUM1,NUM2;
        int  op;
        int sum, mul,sub,div;
        float quo;
        printf("welcome to my calculator! \n");
        printf("Number 1: ");
        scanf("%d",&NUM1);
        printf("Number 2: ");
        scanf("%d",&NUM2);
       
        printf("what operation do u want to perform? choose from: \n For Addition: Press 1 \n For Subtraction: Press 2 \n For Multipication: Press 3 \n  For Division: Press 4\n For Quotient: Press 5\n Enter :");
        scanf("%d",&op); 
            if (op == 1) {
            sum = NUM1+NUM2;
            printf("\nsum is: %d \n", sum);
        }   else if (op == 3) {
             mul = NUM1*NUM2;
             printf("\nproduct is %d \n", mul);
        }   else if (op == 2) {
            sub = NUM1-NUM2;
            printf("\ndifference is %d \n", sub);
        }   else if (op == 4) {
            div = NUM1/NUM2;
            printf("\nquotient is %d \n", div);
        }   else if (op == 5) {
            quo =NUM1/NUM2;
            printf("\nquotient is %f \n", quo);
        }       
         
        return 1;
}//end
