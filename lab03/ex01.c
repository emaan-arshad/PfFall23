#include <stdio.h>
#include <math.h>
int main() {
        float NUM1,NUM2;
        printf("welcome to my calculator! \n");
        printf("Number 1: ");
        scanf("%f",&NUM1);
        printf("Number 2: ");
        scanf("%f",&NUM2);
        float sum = NUM1 + NUM2;
        printf("sum is: %f \n",sum);
        float mul = NUM1 * NUM2;
        printf("product is %f \n",mul);
        float sub = NUM1 - NUM2;
        printf("difference is %f \n",sub);
        float div = NUM1 / NUM2;
        printf("quotient is %f \n",div);
        return 1;
}//end
