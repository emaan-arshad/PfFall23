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
     float d=b*b -4*a*c;
     //
    
     if (d==0) {
        printf("roots are real\n");
        printf("root is %f",(-b)/(2*a));
     }
     if (d>0) {
         float ans1 = (-b+sqrt(d))/(2*a); //root1
        float ans2 = (-b-sqrt(d))/(2*a);//root2
        printf("roots are real and distinct \n they are : %f ,%f ",ans1,ans2);
        
       
        
     }
     if (d<0) {
        printf("roots are imaginary");
     }
  



      return 0;
}//end main
