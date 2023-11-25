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
int main() {



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
    
    
        if(e[i].hrs>=12)  {
            e[i].sal+=150;
        }
         else if(e[i].hrs==10)  {
            e[i].sal+=100;
        }
        else if(e[i].hrs==8)  {
            e[i].sal+=50;
        }
    }
      i=0;  
while(i<10)
{
    printf("\nemployee no:%d",i+1);
    printf("name:%s\n",e[i].name);
printf("new salary:%d\n",e[i].sal);
++i;
}
 return 0;
}//endmain




