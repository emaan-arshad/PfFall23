
#include <stdio.h>
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

struct Date {
    int day ;
    int month;
    int year;
};


int main() {
    struct Date today;
    int no;//no of days to add
  printf("enter ur day,month,year");
  scanf("%d%d%d",&today.day,&today.month,&today.year);
    printf("enter no of days u wanto add");
    scanf("%d",&no);
   int year= isLeapYear(today.year);
    int days;

    if(today.month==2 ) {
        if (year==1)
        days=29;
        else  
        days=28;
    }
    
   else if(today.month<9 && today.month%2==1) {
        days=31;
    }
    else{
        days=30;
    }
    
    int n=0;
    int n1=0;
    if(today.day+no>days) {
        while(today.date>days) {
           no=no-(days-today.date);
           today.date=1;
           n++;
        }
       if(today.month+n>12) {
        while(12<today.month+(1*n)) {
            today.month=today.month+1*n-12;
             n1++;
        }
        today.year=today.year+n1*1;}
        else{
            today.month=today.month+(1*n);
            today.year++;
        }
        
     
    }
    else{
        today.date+=no;
    }
    
    
    printf("%d /%d /%d",today.day,today.month,today.year);
    
    
    
    
    
    

    return 0;
}

