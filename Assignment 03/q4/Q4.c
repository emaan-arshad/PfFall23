/**
 * Programmer: Emaan Arshad
 * Desc: Prints Max and Total Salaries of Departments
 * Date: 09/12/2023
 * Roll-No: 23I-2560
 */ 
#include <stdio.h>
#include <string.h>

typedef struct
{
	int id;
	char firstName[23];
	char lastName[24];
	int salary;
	char dateJoined[50];
	char department[15];
}Worker;

typedef struct 
{
	int id;
	char bonusDate[34];
	int bonusAmount;
}Bonus;

typedef struct 
{
	int id;
	char worker_title[26];
	char affected_from[50];	
}Title;

char departs[][15] = {"HR", "Admin", "Account"};
char (*firstPointer)[15] = &departs[0];
char (*secondPointer)[15] = &departs[0];

int maximum_salary(Worker worker[], char (*firstPointer)[15]) {
	int max = 0, num;
	for (int i = 0; i < 8; i++)
	{
		if (strcmp(worker[i].department, *firstPointer) == 0)
		{
			if (worker[i].salary > max) {
				max = worker[i].salary;
				num = worker[i].id;
			}
		}
	}
	return num;
}

int total_salary(Worker worker[], char (*secondPointer)[15])
{
	int total = 0;
	for (int i = 0; i < 8; i++)
	{
		if (strcmp(worker[i].department, *secondPointer) == 0)
		{
			total += worker[i].salary;
		}
	}
	return total;
}


void showData(Worker worker[], int a) {
	int id;
	if (a == 1){		
		for (int i = 0; i < 3; i++)
		{
			id = maximum_salary(worker, firstPointer + i);
			printf("%d %s %s %d %s %s\n", worker[id-1].id, worker[id-1].firstName, worker[id-1].lastName, worker[id-1].salary, worker[id-1].dateJoined, worker[id-1].department);
		}
	}
	if (a == 2)
	{
		for (int i = 0; i < 3; i++)
		{
			printf("%s - %d\n", *(secondPointer+i), total_salary(worker, secondPointer + i));
		}
	}
}

int main(){
	Worker worker[8] = {
		{1, "Monika", "Arora", 100000, "2014-02-20 09:00:00", "HR"},
		{2, "Niharika", "Verma", 80000, "2014-06-11 09:00:00", "Admin"},
		{3, "Vishal", "Singhal", 300000, "2014-02-20 09:00:00", "HR"},
		{4, "Amitabh", "Singh", 500000, "2014-02-20 09:00:00", "Admin"},
		{5, "Vivek", "Bhati", 500000, "2014-06-11 09:00:00", "Admin"},
		{6, "Vipul", "Diwan", 200000, "2014-06-11 09:00:00", "Account"},
		{7, "Satish", "Kumar", 75000, "2014-01-20 09:00:00", "Account"},
		{8, "Geetika", "Chauhan", 90000, "2014-04-11 09:00:00", "Admin"}
	};
	Bonus bonus[5] = {
		{1, "2016-02-20 00:00:00", 5000},
		{2, "2016-06-11 00:00:00", 3000},
		{3, "2016-02-20 00:00:00", 4000},
		{1, "2016-02-20 00:00:00", 4500},
		{2, "2016-06-11 00:00:00", 3500}
	};
	Title title[8] = {
		{1, "Manager", "2016-02-20 00:00:00"},
		{2, "Executive", "2016-06-11 00:00:00"},
		{8, "Executive", "2016-06-11 00:00:00"},
		{5, "Manager", "2016-06-11 00:00:00"},
		{4, "Asst. Manager", "2016-06-11 00:00:00"},
		{7, "Executive", "2016-06-11 00:00:00"},
		{6, "Lead", "2016-06-11 00:00:00"},
		{3, "Lead", "2016-06-11 00:00:00"}
	};
	printf("Name: Emaan Arshad\nId: 23I-2560\n");
	showData(worker, 1);
	showData(worker, 2);
}

