#include <stdio.h>
#include <math.h>
int main() {
        int base=0;
        int height=0;
        printf("program to find hypotneuse:\n");
        printf("base? ");
        scanf("%d",&base);
        printf("height? ");
        scanf("%d",&height);
        int hypo = sqrt(base * base   +  height * height);
        printf("%d",hypo);
        return 1;
}//end