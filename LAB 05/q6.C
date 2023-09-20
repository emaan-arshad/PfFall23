//Write a C program to receive an 8-bit number into a variable and then check if its 4th and 7th bits are on. If these bits are found to be on, then put them off.

#include <stdio.h>
int main() {
    int in;
    printf("please input a 8 bit number in binary ");
    scanf("%d",&in);
    int a = in/1000;
    int b= in/1000000;
    if (a % 10 ==1 && b%10==1) {
        in=in-1001000;
    }
    printf("%d%",in);
}
