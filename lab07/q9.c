//programmer:Emaan Arshad
//date:11/10/23
//desc:taking input of bills of a mobile company and printing calculations

#include <stdio.h> :
#include <stdbool.h>

 
int main()
{
    int X,Y;
    
    
  printf("Enter the number of company branches : ");
    scanf("%d", &X);

printf("enter the number of mobile phones in each Branch :");
scanf("%d",&Y);
    int arr[X][Y];

  //input bills
   for (int i = 0; i < X ;i++) {
       for(int j=0; j<Y ;j++) {
    printf("\nEnter the Bill amount for the Branch %d;Mobile %d : ",i+1,j+1);
   
       
        scanf("%d", &arr[i][j]);
    }
    }
    
    
   
   int br_bill=0;//bill of each branch
  int t_bill=0;//total bill of company
  int max_bill=0;//maximum bill
  int max_b=0;//max bill branch
   int max_m=0;//max bill mobile id
   
    for (int i = 0; i < X ;i++) {
       br_bill=0;
       for(int j=0; j<Y ;j++) { 
           br_bill += arr[i][j];
           if (max_bill<br_bill) {
               max_bill=br_bill;
               max_b=i+1;
               max_m=j+1;
           }
           
           t_bill += br_bill;
       }
           printf("\nThe bill for branch %d is : %d ",i+1,br_bill);
    }
           
            printf("\nThe total bill for all branches is: %d ",t_bill);
            printf("\nThe  maximum bill is in branch :%d ",max_b);
            printf("\nThe  ID for maximum bill is: branch [%d]mobile[%d] ",max_b,max_m);
           
           
   
   
    return 0;
}
