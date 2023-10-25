//programmer:Emaan Arshad
//date:26/10/23
//desc:a 2D array that represents the batting performance of a cricket team.display the following statistics for each batsman.
//● Total runs scored.
//● Average runs per inning
//● Highest score in a single inning
//● Number of centuries (innings with a score of 100 or more)
//● Number of half-centuries (innings with a score of 50-99)



#include <stdio.h>

int main()
{
    int bats,inn;
    printf("input number of batsmen");
    scanf("%d",&bats);
     printf("input number of innings");
    scanf("%d",&inn);
    int cricket[bats][inn];
     for (int i=0;i<bats;i++) {
           for (int j=0;j<inn;j++) {
         printf("enter perfomance for batsmen no:%d;inning no:%d",i+1,j+1);
         scanf("%d",&cricket[i][j]);
         
     }
     }
     
     for (int i=0;i<bats;i++) {
           for (int j=0;j<inn;j++) {
         printf("%d ",cricket[i][j]);
         
         
     }
     printf("\n");
     }
     
     
     
     int runs;
     int avg;
     int higscore;
     int cent;
     int halfcent;
      for (int i=0;i<bats;i++) {
         higscore=cricket[i][0];
         runs=0;
         avg=0;
         cent=0;
         halfcent=0;
         int j=0;
           for ( j=0;j<inn;j++) {
              runs=runs +cricket[i][j];
          if (higscore<cricket[i][j]) {
                 higscore=cricket[i][j];
          }
          if (cricket[i][j]>=100) {
          cent++;
          }
           if (cricket[i][j]>=50 &&cricket[i][j]<100) {
          halfcent++;
          }
           }
          avg=runs/j;
          printf("\nbatsmen no :%d\nStatistics:\nTotal runs=%d\nAverage runs per inning = %d\nHighest score in a single inning = %d\nNumber of centuries = %d\nNumber of half-centuries = %d\n",i+1,runs,avg,higscore,cent,halfcent);
               }
    return 0;
}
