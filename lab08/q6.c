//programmer:Emaan Arshad
//date:24/10/23
//descr: create a functon to find sum ,maximum and minimum value of array elements



#include <stdio.h>

void processArray(int arr[], int size);

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size]; 

 processArray(arr, size);

    return 0;
}

void processArray(int arr[], int size) {
    int max, min, sum = 0,i;
    
  

    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]); }

     max = arr[0];
    min = arr[0];

	   for (i = 0; i < size; i++) {   
        sum =sum+ arr[i];

        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum value is: %d\n", max);
    printf("Minimum value is: %d\n", min);
    printf("Sum of elements is: %d\n", sum);
}

