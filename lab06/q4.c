///programmer:Emaan Arsad
///date:3/0/23
///Descr:Consider Two integers a and b taken as input from the user. Using Loops iterate the value of
a till the value of b.
If the value of a<=9 the output should correspond to the English representation of the
numbers i.e., 8=Eight, 9=Nine etc.
If the iteration exceeds 9 then the programs should print if the exceeded number is even or
odd.
Example:
Input= 8,11
Output= Eight, Nine, Even, Odd/////




#include <stdio.h>

int main()
{
    
    int a,b;
    
    printf("Enter first number\n: ");
    scanf("%d",&a);
    printf("Enter second number\n: ");
    scanf("%d",&b);
    
    while(a<=b) {
        
    
          switch(a) {////cases to chek for numbers to print in wording
               case 1:
               printf("one ,");
               break;
               
               case 2:
               printf("two ,");
               break;
               
               case 3:
               printf("three ,");
               break;
               
               case 4:
               printf("four ,");
               break;
               
               case 5:
               printf("five ,");
               break;
               
               case 6:
               printf("six ,");
               break;
               
               case 7:
               printf("seven ,");
               break;
               
                case 8:
               printf("eight ,");
               break;
               
               
               case 9:
               printf("nine ,");
               break;
               
               
               
               default :///if number greater than  nine check for even or odd
               if (a%2==0) {
                   printf("Even ,");
               }
                   else {
                       printf("Odd ,");
                   }
               
               
          }//end switch(a)
        a=a+1;
    }///end while(a<=b)
    return 0;
}
