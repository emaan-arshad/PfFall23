//programmer:Emaan Arshad
//date:31/10/23
//reverse an array usiong pointers
#include <stdio.h>


#include <stdio.h>

void arrrev(int arr[],int size) {
    int *a;
    a=arr;
    for(int i=0;i<size/2;i++ ) {
        int temp=*(a+i);
        *(a+i)=*(a+size-i-1);
        *(a+size-i-1)=temp;
    }
    
    
    
}
int main()
{
    int size=10;
    int arr[size];
       for(int i=0;i<size;i++) {
            printf("element no : %d",i+1);
           scanf("%d",&arr[i]);
       }
    arrrev(arr,10);
    printf("reverse array is:\n");
    for(int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}
