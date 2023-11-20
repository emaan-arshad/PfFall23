
#include <stdio.h>
#include<stdlib.h>
int main()
{
   
     int *ptr;
    int rows,cols;
    printf("enter no of rows and cols: \n");
    scanf("%d%d",&rows,&cols);
    ptr=(int*)malloc(rows*cols * sizeof(int));
    
    int **ptr1;
       (ptr1)=(int**)malloc(rows* sizeof(int*));
        
     ptr=(int*)malloc(rows*cols * sizeof(int));

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++) {
            scanf("%d", ptr +i*cols+j);
        }
    }
            
        
   for(int i=0;i<rows;i++) {
       *(ptr1+i)=(ptr+i*cols);
   }
   
  
      int **ptr2;
 
    ptr2=(int**)malloc(rows * sizeof(int*));
    
    for(int i=0;i<rows;i++) {
       *(ptr2+i)=(int*)malloc(cols * sizeof(int));
    }
  for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++) {
            scanf("%d",*(*(ptr2 +i) +j));
        }
    }
       

    return 0;
}
