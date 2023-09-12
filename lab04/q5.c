//programmer: Emaan Arshad(23I-2560)
//date: 9/12/23
//description :Write a program that asks DOB of two persons and then prints who is older


#include <stdio.h>
#include <math.h>

int main() {
     int y1,y2,m1,m2,d1,d2;
     
     printf("Lets find out who is older  \n");
     printf("Enter person 1 birth year: ");
     scanf("%d",&y1);
      printf("Enter person 2 birth year : ");
     scanf("%d",&y2);
      printf("Enter person 1 birth month  ");
     scanf("%d",&m1);
      printf("Enter person 2 birth month  ");
     scanf("%d",&m2);
      printf("Enter person 1 birth date  ");
     scanf("%d",&d1);
      printf("Enter person 2 birth date  ");
     scanf("%d",&d2);
    
    
    if (y1>y2) {
        printf("person 2 is older");
        
    }
    if (y1<y2) {
        printf("person 1 is older");
        
    }
    if (y1==y2) {
        if (m1>m2) {
             printf("person 2 is older");
        }
        if (m2>m1) {
            printf("person 1 is older");
        }
         if (m1==m2) {
             if (d1>d2) {
                 printf("person 2 is older");
             }
              if (d1<d2) {
                 printf("person 1 is older");
             }
              if (d1==d2) {
                 printf("same age !!!");
             }
         } 
       
        
        
    }



      return 0;
}//end main