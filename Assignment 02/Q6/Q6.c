
//programmer Emaan Arshad
//Date 28-10-23
//Description to find pair of elemets that make the target t by sum

#include <stdio.h>
int main(){
   int N,i,t,j,sum=0;

    printf("enter size of an array : ");
    scanf("%d",&N);

 
//[1 2 3 4 5 3 4 ] = 7
    int a[N];
printf("enter elements of array: \n");
    for(i=0;i<N;i++){
        printf("enter element no %d ",i+1);
        scanf("%d",&a[i]);
    }
    
      printf("enter targeted number : ");
    scanf("%d",&t);
    printf("the elements when summed give %d are :\n",t);
    for(int i=0;i<N;i++) {
        for (int j=i;j<N;j++) {
           if (a[i]+a[j]==t) 
           printf("%d,%d ; ",a[i],a[j]);
        }
        
    }
    
    
 return 0;   
}
