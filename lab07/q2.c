///programmer:Emaan Arshad 23I2560
///Date:10/10/23
///Desc: to rotate a array in left direction without using the second array




#include <stdio.h>

int main() {
    int size, rot;
    printf("Enter the size of the array: ");//input array size
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");//input array
    for (int i = 0; i < size ;i++) {
        printf("enter element no %d :",i+1);
        scanf("%d", &arr[i]);
    }//end for

    printf("\nEnter the number by which u want to rotate your array in left direction : ");//input no for rotation
    scanf("%d", &rot);
    rot =rot %size;
    int i=0;
   
  
  
  while(rot+i<size) {
        
        printf("%d ",arr[rot + i]);
        i++;
    }//end while(rot+i<size)   printing modified array (index greater than rotation in original array)
     i =0;
     while(rot) {
         printf("%d ",arr[i]);
         i++;
         rot--;
     }///endwhile(rot)  printing modified array(index less than rotation in original arraya)
  
  
  
  
  
  
    return 0;
}//end main
