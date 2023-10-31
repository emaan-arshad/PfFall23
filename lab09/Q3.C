
#include <stdio.h>

int main()
{
    
    int N;
    printf("enter size of array");
    scanf("%d",&N);
   int arr[N];
   char arr2[N];
   long long int arr3[N];

for(int i=0;i<N;i++) {
    printf("enter element");
    scanf("%d",&arr[i]);
}

for(int i=0;i<N;i++) {
    printf("enter string");
    scanf("%s",&arr2[i]);
}

for(int i=0;i<N;i++) {
    printf("enter integer");
    scanf("%lli",&arr3[i]);
}

int *a1=arr;
char *a2=arr2;
long long int *a3=arr3;

printf("int arr is \n");
    for (int i = 0; i < N; ++i) {
        printf("%d ", *(a1 + i));
 
}
printf("\nchar arr is \n");
    for (int i = 0; i < N; ++i) {
        printf("%s ", *(a2 + i));
 
}
printf("\nlong long int  arr is \n");
    for (int i = 0; i < N; ++i) {
        printf("%lli ", *(a3 + i));
   
}

    return 0;
}
