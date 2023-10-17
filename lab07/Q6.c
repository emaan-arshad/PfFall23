///programmer: Emaan Arshad
///date:11/10/23
//desc: findin frequency of elemnts of  array


#include <stdio.h>
#include <stdbool.h>

int main()
{
    int size;
  printf("Enter the size of the array: ");
    scanf("%d", &size);
//input array elements
    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size ;i++) {
        printf("enter element no %d : ",i+1);
        scanf("%d", &arr[i]);
    }
  //printing array
    printf("array is:");
    printf("{");
    for (int i = 0; i < size ;i++) {
        printf("%d ",arr[i]);
       
    }
    printf("}");
   
   
    int i=0,count=0;
    int a=0;
    int B[size];
    bool flag=true;
  
    while(i<size) {
    while(a<size) {
        if (arr[i]==arr[a]) {
            count=count +1;//increasing count if elent present more than once
        }
        a++;  
    }
      int j=i-1;
    while(j>=0) {
        if(arr[i]==arr[j]) {
             flag=false;
        }//checking if element already printed
        j--;
    }
      
    if (flag==true) {
    printf("Element: %d; Frequency: %d\n",arr[i],count);
    }
      
    i++;
    a=0;
    count=0;
    }
   
   
   
    return 0;
}//end main


