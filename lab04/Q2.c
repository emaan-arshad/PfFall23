//programmer:Emaan Arshad 23I-2560
//date: 9/12/2023
//desription Printing the pattern for any number of n. Below is an example for n=4.
//****
//****
//****
//****



#include <stdio.h>
#include <math.h>

int main() {
     int N;
     int j,a = 0;
    
     printf("input a positive integer: ");
     scanf("%d",&N);
     while (j<N) {
            while(a<N){
          printf("*");
          a=a+1;
                 }//end while(a<N)
              
         
            a=0;
 	    printf("\n");
 	       j = j+ 1;
      }//end while(j<N)
      return 0;
}
