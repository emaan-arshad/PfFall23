

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("please input n to find all Ramanujan-Hardy numbers less than n^3.");
    scanf("%d",&n);
    
   
    for(int i=0;i<n*n*n;i++) {
         for(int j=i;j<n*n*n;j++) {
              for(int k=i;k<n*n*n;k++) {
                for(int l=k;l<n*n*n;l++) {
         
         
         if (i!=j && i!=k && i!=l &&  j !=k && j!=l && k!=l ) {
              int x = pow(i, 3) + pow(j, 3);
              int y = pow(k, 3) + pow(l, 3);
              if (x == y)
             {
             int ans = pow(i, 3) + pow(j, 3);
             
             printf("%d^3 + %d^3 = %d^3 + %d^3 = %d \n",i,j,k,l,ans);
         }   
         }   
         }   
         }
    }
    }






    return 0;
}
