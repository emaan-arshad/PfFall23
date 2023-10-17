//programer: Emaan Arshad
//date:11/10/23
//desc:input array and print it in ascending order

#include <stdio.h>
#include <stdbool.h>

 
int main()
{
    int size;
  printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size ;i++) {
        printf("enter element no %d : ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("array is:");
    printf("{");
    for (int i = 0; i < size ;i++) {
        printf("%d ",arr[i]);
       
    }
    printf("}");


  
   int x=0;
   for(int i=0;i<size;i++) {
      for(int j=i +1;j<size;j++) {
       if (arr[i]>arr[j])//checking if next elements are smaller
       {
           x=arr[i];//storing in a variable to not lose values while swapping
           arr[i]=arr[j];
           arr[j]=x;
       }    
   }
   }
   //printing ascending order array
   printf("array in ascending order:");
    printf("{");
    for (int i = 0; i < size ;i++) {
        printf("%d ",arr[i]);
       
    }
    printf("}");
   
   
   
    return 0;
}


