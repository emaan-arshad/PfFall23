//programmer:Emaan Arshad
//date:18/10/23
//desc:  we want to find the largest value in every contiguous 3x3 matrix in the grid.


#include <stdio.h>
#include <stdbool.h>



int main()
{
    int n;
    
    printf("Please enter order of your square  matrix (greater than 3); ");
    scanf("%d",&n);
   
   int A[n][n];
  
  printf("Enter elements of first matrix: \n");
   
   
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            printf("Element of row:%d,col:%d :  ",i+1,j+1);
            scanf("%d",&A[i][j]);
        }     
    }
  
      //original matrix:
      printf("Matrix  1:\n");
       for(int i=0; i<n; i++) {
             for(int j=0; j<n; j++) {
                 printf("%d",A[i][j]);
                 printf("\t");
             }
             printf("\n");
       }
       
       int max=0;
  int maxLocal[n-2][n-2];

  
    for(int i=0;i<n-2;i++) {
    for(int j=0;j<n-2;j++){
        max=0;
    for(int k=i;k<i+3;k++){
    for(int l=j;l<j+3;l++){
        if(A[k][l]>max) {
           max=A[k][l];
            maxLocal[i][j]=A[k][l];   
        }//finding max 
    }//for(int l=j;l<j+3;l++)
    }//for(int k=i;k<i+3;k++)
    }//for(int j=0;j<n-2;j++)
    }// for(int i=0;i<n-2;i++)
    
    
    printf("\nMatrix  maxLocal becomes: \n");
       for(int i=0; i<n-2; i++) {
             for(int j=0; j<n-2; j++) {
                 printf("%d",maxLocal[i][j]);
                 printf("\t");
             }
             printf("\n");
       }//printing maxLocal
    
    
    
    
    
    return 0;
}
