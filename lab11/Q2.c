//programmer:Emaan Arshad
//date:21/11/23
//desc:struct of engine parts


#include <stdio.h>
#include <string.h>
//declaring engine array
  struct ENGINE{
        char mat[100];
        int quan;
      
        int year;
        char s_no[100];
        
    };
int main(){



int i = 0;
int n;
printf("enter no of engines :\n");
struct ENGINE parts[100]; 
scanf("%d",&n);
//taking n inputs for serialno,quan,year,mat
while(i<n)
{
    printf("\nengine no:%d",i+1);
    printf("enter serial no:(from AA0-FF9) ");
scanf("%s",parts[i].s_no);
printf("enter quantity: ");
scanf("%d",&parts[i].quan);
printf("enter year of manufacture : ");
scanf("%d",&parts[i].year);
 printf("enter material name : ");
 scanf("%s",parts[i].mat);

++i;
}

printf("The engine parts which have serial number from BB1-CC6 have the following data:  ");
   
    for(int i=0;i<n;i++) {
        int ret=strcmp(parts[i].s_no,"BB1");//checking for boundaries by string comparision 
        int ret1=strcmp(parts[i].s_no,"CC6");
        if(ret>=0 && ret1<=0)  {//printing all the info of matched serial nos
        printf("%s",parts[i].s_no);
        printf("Manufacture year: %d\n",parts[i].year);
        printf("Material: %s\n",parts[i].mat);
        printf("Quantity: %d\n\n",parts[i].quan);
        }//end if
     }//end for
    return 0;
}//endmain
