//programmer:Emaan Arshad
//date:29/11/23
//desc:sorts the shirt details based on age in ascending order and, within the same age, sorts them based on price in descending order.
#include <stdio.h>

int main()
{
    int age,no =10,price;
    
int arr[10][2]={{0,200},{0,500},{0,700},{0,100},{0,200},{0,700},{0,500},{0,200},{0,100},{0,700}};


for(int i=0;i<10;i++) {
   int j=0;
        printf("enter shirt no %d age",i+1);
        scanf("%d",&arr[i][0]);
    }
    
    printf("age\tprice:\n");
    
    for(int i=0;i<10;i++) {

        for(int j=0;j<2;j++) {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }



  int x=0;
   for(int i=0;i<10;i++) {
      for(int j=i +1;j<10;j++) {
       if (arr[i][0]>arr[j][0])//checking if next elements are smaller
       {
           x=arr[i][0];//storing in a variable to not lose values while swapping
           arr[i][0]=arr[j][0];
           arr[j][0]=x;
       }    
   }
   }
   
   
   printf("shirts in ascending order based on age\n");
     printf("\nthen those shirts in descending order based on price\n");

    
    
    
    int y=0;
   for(int i=0;i<10;i++) {
      for(int j=i +1;j<10;j++) {
            if (arr[i][0]>arr[j][0])//checking if next elements are smaller
       {
           x=arr[i][0];//storing in a variable to not lose values while swapping
           arr[i][0]=arr[j][0];
           arr[j][0]=x;
           y=arr[i][1];//storing in a variable to not lose values while swapping
           arr[i][1]=arr[j][1];
           arr[j][1]=y;
           
       }
      }
   }
    for(int i=0;i<10;i++) {
      for(int j=i +1;j<10;j++) {
          
          if(arr[i][0]==arr[j][0]) {
              if(arr[i][1]<arr[j][1]) {
                  x=arr[i][1];
                  arr[i][1]=arr[j][1];
                  arr[j][1]=x;
              }
              
              
          }
          
      }
      
      
    }
          
          
          
 
for(int i=0;i<10;i++) {
      
        for(int j=0;j<2;j++) {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }





    return 0;
}
