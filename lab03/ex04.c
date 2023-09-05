#include <stdio.h>
#include <math.h>
int main() {
        int op=0;
        int pcount=0;
        printf("program to find original price: \n");
        printf("original price: ");
        scanf("%d",&op);
        printf("percentdiscount: ");
        scanf("%d",&pcount);
        int salep= op-(pcount*op/100);
        printf("sale price is %d",salep);
        return 1;
}//end