///programmer:Emaa Arshad
///dtae:3/10/23
///desc:Write a program for a match-stick game between the computer and a user. Your
program should ensure that the computer always wins. Rules for the game are as
follows:
1. There are 21 matchsticks.
2. The computer asks the player to pick 1,2,3 or 4 match sticks.
3. After the person picks, the computer does its picking.
4. Whoever is forced to pick up the last matchstick loses the game.//////






  
#include <stdio.h>
int main() {
    printf("Lets play a fun match-stick game!!!\n  Rules for the game follows: \n1. There are 21 matchsticks. \n2. The computer asks the player to pick 1,2,3 or 4 match sticks.\n3. After the person picks, the computer does its picking.\n4. Whoever is forced to pick up the last matchstick loses the game.");
    int matstck=21;
    int choice;
    
    
    while(matstck>1)  {
          printf("\nyour turn: Please pick a number between 1,2,3 or 4\n");
           scanf("%d",&choice);
           matstck=matstck-choice;
           printf("\nmatchsticks left:%d\n computers turn...\n",matstck);
        
        
        
        switch (matstck) {
           
           
            case 2:
            case 7:
            case 12:
            case 17:
                    matstck=matstck-1;
                    printf("the computer chooses number: 1\n matchsticks left are:%d\n",matstck);
                    break;
            
            case 3:
            case 8:
            case 13:
            case 18:
                   matstck=matstck-2;
                printf("the computer chooses number: 2\n matchsticks left are:%d\n",matstck);
                break;
            
            case 4:
            case 9:
            case 14:
            case 19:
                   matstck=matstck-3;
                   printf("the computer chooses number: 3\n matchsticks left are:%d\n",matstck);
                   break;
            
            case 5:
            case 10:
            case 15:
            case 20:
                     matstck=matstck-4;
                    printf("\nthe computer chooses number: 4\n matchsticks left are:%d\n",matstck);
                    break;
                    
            default:
            
            
            
            
        }//end switchh
        
    }//end while
    
    printf("Ooops you lost. Better luck next time!!!");
}//end main
  
