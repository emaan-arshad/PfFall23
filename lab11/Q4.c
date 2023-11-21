//programmer:Emaan Arshad
//date:21/11/23
//desc:employees salary


#include <stdio.h>
#include <string.h>
//declaring 
  struct employees{
        char name[100];
        int sal;
      
        int hrs;
       
        
    };
int main(){



int i = 0;

struct employees e[100]; 

while(i<10)
{
    printf("\nemployee no:%d",i+1);
    printf("enter name:  ");
scanf("%s",e[i].name);
printf("enter salary: ");
scanf("%d",&e[i].sal);
printf("enter hrs /day ");
scanf("%d",&e[i].hrs);

++i;
}


   
    for(int i=0;i<10;i++) {
    
    
        if(e.hrs[i]>=12)  {
            e.sal[i]+=150;
        }
         else if(e.hrs[i]>=10)  {
            e[i].sal+=100;
        }
        else if(e[i].hrs>=8)  {
            e[i].sal+=50;
        }
        
        while(i<10)
{
    printf("\nemployee no:%d",i+1);
    printf("name:%s\n",e[i].name);
printf("new salary:%d\n",&e[i].sal);


++i;
}
        
        
        
        printf("%s",parts[i].s_no);
        printf("Manufacture year: %d\n",parts[i].year);
        printf("Material: %s\n",parts[i].mat);
        printf("Quantity: %d\n\n",parts[i].quan);
        }//end if
     }//end for
    return 0;
}//endmain


