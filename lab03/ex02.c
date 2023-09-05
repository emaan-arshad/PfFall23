#include <stdio.h>
#include <math.h>
int main() {
        int len=0;
        int width=0;
        int depth=0;
        printf("program to find ball container :\n");
        printf("length? ");
        scanf("%d",&len);
        printf("depth? ");
        scanf("%d",&depth);
        printf("width? ");
        scanf("%d",&width);
        int volume = len * width * depth;
        printf("volume of container is %d",volume);
         
        return 1;
}//end
