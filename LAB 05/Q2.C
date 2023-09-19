#include <stdio.h>

int main()
{
    int a,b;
    
    
    
    
    printf("please input time in 24 hr format: \n enter hrs: ");
    scanf("%d",&a);
    printf("enter minutes: ");
    scanf("%d",&b);
    
    if (a>=5 && a<=11) {
        printf("Good morning!!");
    
    }
    if (a>=12 && a<=18) {
        printf("Good afternoon!!");
    }
    if (a>18 && a<=24) {
        printf("Good night!!");
    }
    
    if (a>=1 && a<5) {
        printf("The time is  %d :%d ", a,b);
    }
    
    
    return 0;
}
