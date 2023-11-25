/*
  Programmer:Emaan ARshad
date:25/11/23
  desc:using nested structs to take input of 5 students details
*/






#include <stdio.h>

struct regis {
  char  course_id[100];
 char course_name[20];

};
struct student{
    int s_id;
    char s_fname[30];
    char s_lname[30];
   long long int s_cno;
    char s_email[30];
    struct regis reg;
};

int main()
{
   struct student data[5];
    int i=0;
  while(i<5)
{
 printf("\nstudent no: %d\n",i+1);
  printf("enter student id : ");
scanf("%d",&data[i].s_id);
printf("enter first name: ");
scanf("%s",data[i].s_fname);
printf("enter last name: ");
scanf("%s",data[i].s_lname);
 printf("enter cell no: ");
 scanf("%lli",&data[i].s_cno);
 printf("enter email: ");
scanf("%s",data[i].s_email);
 printf("enter course no: ");
scanf("%s",data[i].reg.course_id);
printf("enter course name: ");
scanf("%s",data[i].reg.course_name);
++i;
}
for (i=0; i<5; i++){
        printf ("\n\nThe data of the %d student \n:::",i+1);
        printf ("The ID of the student :%d\n",data[i].s_id);
        printf ("The first name of the student :%s\n",data[i].s_fname);
        printf ("The last name of the student: %s\n",data[i].s_lname);
        printf ("The cell number of the student: %lli\n" ,data[i].s_cno);
        printf ("The email of the student: %s\n" ,data[i].s_email);
        printf ("The course id of the student: %s\n",data[i].reg.course_id);
        printf ("The course name of the student: %s\n" ,data[i].reg.course_name);
    }
   return 0;
}
