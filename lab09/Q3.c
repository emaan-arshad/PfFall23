/*programmer : Emaan Arshad
    date: 2/11/23
    desc: 3 types of array printing using pointers */
#include <stdio.h>

int main()
{
    
    int N;
    printf("enter size of arrays : ");
    scanf("%d",&N);
   int arr[N];
   char arr2[N];
   long long int arr3[N];
printf("\nEnter elements of integer array: \n");
for(int i=0;i<N;i++) {
    printf("enter element no %d :",i+1);
    scanf("%d",&arr[i]);
}
printf("\nEnter elements of char array: \n");
for(int i=0;i<N;i++) {
    printf("enter element no %d :",i+1);
    scanf("%s",&arr2[i]);
}
printf("\nEnter elements of long long integer array: \n");
for(int i=0;i<N;i++) {
    printf("enter element no %d :",i+1);
    scanf("%lli",&arr3[i]);
}

int *a1=arr;
char *a2=arr2;
long long int *a3=arr3;
printf("array of integers is: \n");
for(a1=a1;a1<=&arr[N-1];a1++) {
        printf("element is %d and its address is %p \n",*a1,a1);
}
printf("\narray of long long integers is : \n");
for(a3=a3;a3<=&arr3[N-1];a3++) {
    printf("element is %lli and its address is %p \n",*a3,a3);
}
printf("\narray of character is :\n");
for(a2=a2;a2<=&arr2[N-1];a2++) {
    printf("element is %c and its address is %p \n",*a2,a2);
}
    return 0;
}
