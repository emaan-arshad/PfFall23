//programmer:Emaan Arshad
//date:21/11/23
//desc: a structure to specify data on students
#include <stdio.h>
#include <string.h>
  struct student{
        char name[40];
        int rollno;
       char course[100];
        int year;
        char dept[100];
        
    };
int main(){


struct student studentdata[450]; 
int i = 0;
int n;
printf("enter no of students :\n");
scanf("%d",&n);
while(i<n)
{
    printf("\nstudent no:%d",i+1);
    printf("enter name: ");
scanf("%s",studentdata[i].name);
printf("enter roll no: ");
scanf("%d",&studentdata[i].rollno);
printf("enter joining year : ");
scanf("%d",&studentdata[i].year);
 printf("enter course name : ");
 scanf("%s",studentdata[i].course);
 printf("enter department name : ");
 scanf("%s",studentdata[i].dept);
++i;
}
int syear,roll_no;
   printf("enter ur specific year :");
   scanf("%d",&syear);
   
    for(int i=0;i<n;i++) {
        if(studentdata[i].year==syear) 
        printf("%s\n",studentdata[i].name);
    }
 printf("\nenter roll no :");
    scanf("%d",&roll_no);
     for(int i=0;i<n;i++) {
        if(studentdata[i].rollno==roll_no) {
        printf("Name : %s\n",studentdata[i].name);
        printf("Joining year: %d\n",studentdata[i].year);
        printf("Course: %s\n",studentdata[i].course);
        printf("Department: %s\n",studentdata[i].dept);
        }
     }
    return 0;
}
