/* Programmer:Emaan Arshad
date:25/11/23
  Desc: using structures to take input of data, finding desired data, and then applying multipliaction on structures
  */
#include <stdio.h>

struct box {
    int height;
    int width;
    int length;
};

int main (){
    int n;
    printf ("Enter the number of boxes \n");
    scanf ("%d" ,&n);
    struct box data[10];
    int i=0;
    for (i=0; i<n; i++){
        printf ("Enter box no %d dimensions  \n",i+1);
        printf ("Enter the length \n");
        scanf ("%d",&data[i].length);
        printf ("Enter the width \n");
        scanf ("%d",&data[i].width);
        printf ("Enter the height\n");
        scanf ("%d",&data[i].height);
    }
    i=0;
    while(i<n) {
        printf ("volume of box %d is %d \n", i+1,((data[i].height*data[i].length)*data[i].width));
        if (data[i].height < 40){
           
            printf("can be passed\n");
        }
        else{
            printf("cannot be passed\n");
        }
        ++i;
    }


    return 0;
}
