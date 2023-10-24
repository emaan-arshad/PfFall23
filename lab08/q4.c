//programmer:Emaan Arshad
//date:24/10/23
//desc: checking for password




#include<string.h>
#include<stdio.h>
int main()
{
    int flag;
char password[80];
char str[100]="Secure123";
printf("Enter password:\n");
gets(password);

 int len=strlen(password);
if(len>=8) {
    flag=1;
}

int ret;

ret = strcmp(password, str);
if (flag==1) {
if(ret < 0) {
printf("invalid password");
} else if(ret > 0) {
printf("invalid password");
} else {
printf("Welcome!");
}
}
if (flag==0) {
    printf("Invalid length");
}


return 0;
}
    
    
    
