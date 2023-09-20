
#include <stdio.h>
int main() {
    int o;
    printf("Happy Eid,please input yr amount: ");
    scanf("%d",&o);
    if (o<=1999) {
        printf("you are not applicable for discount");
        
    }
    else if (o>=2000 && o<=4000) { 
        printf(" your amount was %d\n, after discount it became %d\n, you saved %d rupees",o,o-o*20/100,o*20/100);
    }
    else if (o>=4001&& o<=6000) { 
        printf(" your amount was %d\n, after discount it became %d\n, you saved %d rupees",o,o-o*30/100,o*30/100);
    }
    else if (o>6000) { 
        printf(" your amount was %d\n, after discount it became %d\n, you saved %d rupees",o,o-o*50/100,o*50/100);
    }
}
