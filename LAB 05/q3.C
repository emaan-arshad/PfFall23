
#include <stdio.h>

int main()
{
     char ans;
    printf("Are u sure u wanto delete this Program, input Y or y for yes else input N or n for no : ");
    scanf("%c",&ans);
    //if (ans= "Y" || ans="y") {
       // ans=1;
    //}
    //if (ans= "N" || ans= "n"){
      //  ans =2;
   // }
    
    switch (ans) {
        case 'Y':
            printf("Deleted successfully");
            break;
        case 'N':
        printf("Delete cancelled");
        break;
        case 'n':
        printf("Delete cancelled");
        break;
        case 'y':
        printf("Deleted succesfully");
        break;
        default :
        printf("are u sure u are entering the right letter??");
    }
    return 0;
}
