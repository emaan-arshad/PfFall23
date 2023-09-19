#include <stdio.h>

int main()
{
     char ans;
    printf("Are u sure u wanto delete this orogram, input Y or y for yes else input N or n for no : ");
    scanf("%c",&ans);
    if (ans== "Y" || ans=="y") {
        ans=1;
    }
    if (ans== "N" || ans== "n"){
        ans =2;
    }
    
    switch (ans) {
        case 1:
            printf("Deleted successfully");
            break;
        case 2:
        printf("Delete cancelled");
        
    }
    
    return 0;
}
#include <stdio.h>

int main()
{
     char ans;
    printf("Are u sure u wanto delete this orogram, input Y or y for yes else input N or n for no : ");
    scanf("%c",&ans);
    if (ans== "Y" || ans=="y") {
        ans=1;
    }
    if (ans== "N" || ans== "n"){
        ans =2;
    }
    
    switch (ans) {
        case 1:
            printf("Deleted successfully");
            break;
        case 2:
        printf("Delete cancelled");
        
    }
    
    return 0;
}
