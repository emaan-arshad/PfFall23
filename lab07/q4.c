///programmer:Emaan Arshad
///date:10/10/23
///desx:to check if array is symmetric or not
#include <stdio.h>








int main() {
 
 int i,j ,r,c,ctr;
 printf("please enter number of  rows off your  matrix:");
 scanf("%d",&r);
 printf("please enter number of  columns off your  matrix:");
 scanf("%d",&c);
 

 int A[r][c];
 for(i=0;i<r;i++){
     
  for(j=0;j<c;j++){
     printf("enter number for row:%d col:%d :",i+1,j+1);
     scanf("%d",&A[i][j]);
  }
 }
  
printf("Elements of arrays are:\n");
    for(i=0;i<r;i++){
     
        for(j=0;j<c;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
     ctr=r*c;
    
    for(i=0;i<r;i++){
     
        for(j=0;j<c;j++){
        if (A[i][j]==A[j][i]) {
            ctr=ctr-1;
        }
         
           
        
        }
    }
        if (ctr==0) {
            printf("array is  symmetric");
            
        } 
            if(ctr!=0) {
               printf("array isnt symmetric");
            }
        
    
    
    
 return 0;
}
