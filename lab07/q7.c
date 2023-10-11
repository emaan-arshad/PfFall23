////programmer: Emaan Arshad
///Date:10/10/23
////Desc:Matrix multiplication






#include <stdio.h>
int main()
{
    int r,c,R,C;
    
    printf("Please enter no of rows for matrix 1 (lessthan100):");
    scanf("%d",&r);
    printf("Please enter no of columns for matrix 1 (lessthan100):");
    scanf("%d",&c);
    
    
     printf("Please enter no of rows for matrix 2 (lessthan100):");
    scanf("%d",&R);
     printf("Please enter no of rows for matrix 2  (lessthan100):");
    scanf("%d",&C);
   
   if(c==R) {
   
       int A[r][c];
       printf("Enter elements of first matrix:\n");
   
   
        for(int i=0; i<r; i++) {
             for(int j=0; j<c; j++) {
                printf("Element of row:%d,col:%d ",i+1,j+1);
                scanf("%d",&A[i][j]);
              }
           
           }
      
          printf("Matrix  1:\n");
           for(int i=0; i<r; i++) {
                 for(int j=0; j<c; j++) {
                 printf("%d ",A[i][j]);
             }
             printf("\n");
            }
     
    
           int B[R][C];
    
           printf("Enter elements of second matrix:\n");
    
    
           
   
          for(int i=0; i<R; i++) {
              for(int j=0; j<C; j++) {
              printf("Element of row:%d,col:%d  ",i+1,j+1);
            
               scanf("%d",&B[i][j]);
              }
           
                  }
   
               printf("Matrix  2:\n");
                   for(int i=0; i<R; i++) {
                      for(int j=0; j<C; j++) {
                          printf("%d ",B[i][j]);
                    }
                           printf("\n");
                   }
       
            int ans[r][C];
       
            for(int i=0;i<r;i++) {
                 for(int j=0;j<C;j++) {
                     ans[i][j]=0;
                     for(int a =0;a<R;a++) {
                          ans[i][j] = ans[i][j] + A[i][a]*B[a][j];
                  
                }
                
            }   
        }
             printf(" The product of Matrix multiplication givess:\n");
               for(int i=0; i<r; i++) {
              for(int j=0; j<C; j++) {
                 printf("%d",ans[i][j]);
                 printf(" ");
             }
             printf("\n");
          
            }
        
   }    
    if(c!=R)  {
        printf("Your matrices are incompatible for multiplication");
    }

    return 0;
}
