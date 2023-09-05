#include <stdio.h>
#include <math.h>
int main() {
        float x1,x2,x3,x4,lperkm;
        printf("lets calculate distance and fuel consumed! \n");
        printf("for what kms bus went south? ");
        scanf("%f",&x1);
        printf("what kms bus went north? ");
        scanf("%f",&x2);
        printf("what kms bus went east? ");
        scanf("%f",&x3);
        printf("what kms bus went west? ");
        scanf("%f",&x4);
        printf("how much is fuel consumed per km ? ");
        scanf("%f",&lperkm);
        
        float distance = x1 + x2 +x3 + x4;
        printf("total kms travelled are : %f \n",distance);
       
        
        float fuelcons = distance * lperkm;
        printf("fuel consumed is  %f liters \n",fuelcons);
       
        return 1;
}//end