
//programmer Emaan Arshad
//Date 28-10-23
//Description to find persistence value

#include <stdio.h>
int main(){
  

    

 int i=0;
//[1 2 3 4 5 3 4 ] = 7
    int arr[100]={0};
printf("enter numbers to find their persistence value when u r done enter -1\n");
    for(i=0;i<100;i++){
        printf("enter number %d ",i+1);
        scanf("%d",&arr[i]);
        
        if (arr[i]==-1) {
        break;
        }
        
    }
    
  int a = 1;
 int N=1;
int count=0;
int j=0;

        for ( j=0;j<i;j++) {
            if(arr[j]<10&&arr[j]>-1) {
            printf("the persistence value of %d is 0\n",arr[j]);
        }
            
         int value=arr[j];   
           while(arr[j]>10) {
        N=arr[j];
       
        arr[j]=1;
              
            while(N){
          a=N%10;
         N=N/10;
         arr[j]*=a;
        }
        
        
        count++;
        if((arr[j]/10)==0) {
            printf("the persisitence value of %d is %d\n",value,count);
            count=0;
            break;
        }
       
           }
           
        
          
}
   
 return 0;   
}
