

//programmer:Emaan Arshad
//date:31/10/23
//swap by reference using pointers
//in part 1 since function is callled by value the value of a and b only swaps within the function and not iin real
#include<stdio.h>

int swap(int *a, int *b)
{
 
  int temp;
  
 
  temp = *a;
  *a = *b;
  *b = temp;
  return 0;
}

int main()
{
 
  int a,b, temp;
  
  printf("Enter two numbers to swap: ");
  scanf("%d %d",&a,&b);
  printf(" a: %d, b: %d\n",a,b);


 
  swap(&a, &b);
  printf("After swapping - a: %d, b: %d\n",a,b);
  
  return 0;
}
