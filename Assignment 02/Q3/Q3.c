//programmer:Emaan Arshad
//date:30/10/23
 // desc: flights availability and best option based on lowest price
#include <stdio.h>

int main (){
 
    int a[5][4] = {{1, 300, 0, 0}, {1, 320, 1 , 310}, {0, 0, 1, 280}, {1, 380, 0 ,0}, {1, 375, 1 ,400}};
 
    int choice;
    
    printf ("Enter 1 if you want to book a flight in the morning slot, 2 if you want to book a flight in the evening slot, and 3 if you have a specifc prefernce for  a day \n");
    scanf ("%d", &choice);
    
    int i,count = 1;
    int min = a[0][1];
  
    if (choice == 1){
        for (i=0 ; i<5; i++){ 
            if (a[i][0] == 1){ 
                printf ("The flight is available on %d day of the week for morning slots \n", i+1); 
                if (a[i][1] < min){
                    min = a[i][1]; 
                    count = i+1; 
                }
             } 
        }
     printf ("\nThe best option to book flight is on %d day of the week whose price is %d",count,min);
        
    }
    
    else if (choice == 2){
    int count = 1;
    int min = a[1][3];
        for (i=0 ; i<5; i++){ 
            if (a[i][2] == 1){ 
                printf ("The flight is available on %d day of the week for evening slots only \n", i+1); 
                 if ( a[i][3] < min){ 
                    min = a[i][3]; 
                    count = i + i; 
                 }
             }
         }
     printf ("\nThe best option to book the flight is on %d day of the week for price %d",count,min); 
    }
   else if (choice == 3){
        int day;
        printf ("Press 1 for Monday, 2 for Tuesday, 3 for Wednesday, 4 for Thursday ,and 5 for Friday"); //giving specified inputs to get the prefernce of day 
        scanf ("%d", &day);
         for (i=0; i<5; i++){ 
            if (day == i){ 
                if (a[i][0] == 1 && a[i][2] == 1){ 
                    printf ("The flight is available for both morning and evening slots on %d day of the week\n",i+1);
                    printf ("The morning flight costs %d and the evening flight costs %d",a[i][1], a[i][3]);
                }
                else if (a[i][0] == 1 && a[i][2] == 0){ 
                    printf ("The flight is available for the morning slot only on %d day of the week \n",i+1);
                    printf ("The flight costs %d ",a[i][1]);
                }
                else if (a[i][0] == 0 && a[i][2] == 1){ 
                    printf ("The flight is available for the evening slot only on %d day of the week\n",i+1);
                    printf ("The flight costs %d ",a[i][3]);
                }
                else { 
                    printf ("No flights available on %d day of the week",i+1);
                }
            }
        }
    }
    return 0;
}
