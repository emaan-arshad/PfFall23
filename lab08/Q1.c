//programmer:Emaan Arshad
//Date: 24-10-2023
//description:function to swap two integers

#include <stdio.h>
void swapIntegers(int a, int b);

int main(){
int a,b;
printf("enter integer a: ");
scanf("%d",&a);
printf("enter integer b: ");
scanf("%d",&b);

swapIntegers(a,b);
return 0;


}


void swapIntegers(int a, int b){
int c;
c=a;
a=b;
b=c;
printf("Integers become a=:%d , b= %d",a,b);

return ;

}
