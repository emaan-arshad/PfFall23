
//programmer:Emaan Arshad
//Date: 24-10-2023
//description:function to check if 

#include <stdio.h>
void calculateDiscount(int a, int b);

int main() {
int a,b;
printf("enter your total purchase amount: ");
scanf("%d",&a);
printf("enter mumber of times u have visited the shop in the past: ");
scanf("%d",&b);
 calculateDiscount(a,b);
return 0;


}


void calculateDiscount(int a, int b){
    float flag=0;
   
if (b>10 && a>=50)
    flag =.15;

 else if (b>5 && a>=30)
    flag =.10;



printf("you saved Rs %f, your purchase amount is now: %f",a*flag,a-a*flag);
 
return ;

}
