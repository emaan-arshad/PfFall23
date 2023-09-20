#include <stdio.h>
int main() {
    int l;
    printf("please input yr Light value \n Enter a value between(0-100) if its evening \n a value above 500 if you are under direct sunshine \n else enter value between (101-500): ");
    scanf("%d",&l);
    if (l>=0 && l<=100) {
        printf("your brightness is set to minimum");
        
    }
    else if (l>=101 && l<=500) { 
        printf(" your  brightness is set to moderate");
    }
    else if (l>500) { 
        printf(" your brightness is set to maximum");
    }
    
}
