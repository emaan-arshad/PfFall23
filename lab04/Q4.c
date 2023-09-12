//programmer: Emaan Arshad(23I-2560)
//date: 9/12/23
//description :Write a program that asks user for appropiate inputs and then uses the quadratic formula to return the solutions.


#include <stdio.h>
#include <math.h>

int main() {
     float a,b,c;
     
     printf("your own personal quadratic roots finder \n");
     printf("Enter coeffiecient of x square ,a: ");
     scanf("%f",&a);
      printf("Enter coeffiecient of x , b: ");
     scanf("%f",&b);
      printf("Enter constant term, c: ");
     scanf("%f",&c);
  float ans1 = (-b+sqrt(b*b - 4*a*c))/(2*a); //root1
   float ans2 = (-b-sqrt(b*b - 4*a*c))/(2*a);//root2
     printf(" value of first root is %f \n",ans1);  
      printf("value of second root is %f",ans2); 



      return 0;
}//end main
