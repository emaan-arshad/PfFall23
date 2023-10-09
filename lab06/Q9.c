
////programmer:Emaan Arshad
////date:5/10/23
////desc:max and min in array


#include<stdio.h>
int main(){
	
	int arr[100],sz,a,max,min;
	printf("enter size of array :");
	scanf("%d",&sz);
	 for(a=1;a<=sz;a++){
	 	printf("enter element no %d:",a);
		scanf("\n %d",&arr[a]);
	}
	max = arr[0];
	 for(a=1;a<=sz;a++){
		if(arr[a]>max){
			max= arr[a];	
		}
		min==arr[0];
		if (arr[a]<min){
		    min = arr[a];
		}
	 }
	printf("\n Maximum value: %d",max);
	printf("\n Minimun value: %d",min);
	 return 0;
}
