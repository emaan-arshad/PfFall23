//programmer:Emaan Arshad
//date:29/10/23
//print spiral matrix inwards and outwards



#include <stdio.h>

int main()
{
    int n,c;
    printf("enter order for ur spiral matrix");
    scanf("%d",&n);
    
int spiral[100][100]={0};
int i=0;
int j=0;
int a=1;
int k=0;
int l=0;
      int N=n;
     
     
        while(a<=N*N) {
           
       
     
      for( j=j;j<n;j++) {
          spiral[i][j]=a;
          a++;
      }
     
      j=n-1;
      for(i=i+1;i<n;i++) {
          spiral[i][j]=a;
          a++;
      }
         
         i=n-1;
         for(j=j-1;j>k;j--) {
             spiral[i][j]=a;
             a++;
         }
         
          for(i=n-1;i>l;i--) {
             spiral[i][j]=a;
             a++;
         }
         i++;
         j++;
         n--;
          
            k++;
            l++;
        }
         
         
             
              for(int i=0;i<N;i++){
                  for(int j=0;j<N;j++) {
                      printf("%d",spiral[i][j]);
                      printf("\t");
                  }
                  printf("\n");
              }
             
             
             
             
return 0;
}
