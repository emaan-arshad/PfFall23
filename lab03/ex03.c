#include <stdio.h>
#include <math.h>
int main() {
        float base=0;
        float height=0;
        printf("program to find hypotneuse:\n");
        printf("base? ");
        scanf("%f",&base);
        printf("height? ");
        scanf("%f",&height);
        float hypo = sqrt(base * base   +  height * height);
        printf("hypotenuse is %f",hypo);
        return 1;
}//end
