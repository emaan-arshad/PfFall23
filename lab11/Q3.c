//programmer:Emaan Arshad
//dtae:21/11/23
//desc:compare 2 dates
#include <stdio.h>
#include <string.h>
  struct date{
        int day;
        int month;
      
        int year;
       
        
    };
int main(){



int i = 0;
int n;

struct date d[2]; 

while(i<2)
{
    printf("\ndate no:%d",i+1);
    printf("enter day ");
scanf("%d",&d[i].day);
printf("enter month ");
scanf("%d",&d[i].month);
printf("enter year : ");
scanf("%d",&d[i].year);


++i;
}
   
    
        if(d[0].day==d[1].day &&d[0].month==d[1].month && d[0].year==d[1].year)  {

        printf("dates are equal" );
        }
        else {
            printf("not equal");
        
     }
    return 0;
}
