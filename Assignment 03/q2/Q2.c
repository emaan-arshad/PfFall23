/**
 * Programmer: Emaan Arshad
 * Desc: Department details Stored Using Structtures
 * Date: 09/12/2023
 * Roll-No: 23I-2560
 */ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct
{
	char name[20];
	char role[25];
	int communication;
	int teamwork;
	int creativity;
} employee;

typedef struct
{
	char departname[20];
	employee emp[5];
} department;

void data(char names[][20], char roles[][15], department details[]){
	int randValue;
	int trackingNamesArray[20] = {0};
	char departments[][15] = {"Hr", "Finance", "Marketing", "Logistics"};
	for (int i = 0; i < 4; ++i)
	{
		int rolesTrackArray[5] = {0};
		for (int j = 0; j < 5; ++j)
		{
			strcpy(details[i].departname, departments[i]);	

			do {
				randValue = rand() % 20;
			} while(trackingNamesArray[randValue] == 1);
			trackingNamesArray[randValue] = 1;
			strcpy(details[i].emp[j].name, names[randValue]);


			do {
				randValue = rand() % 5;
			} while(rolesTrackArray[randValue] == 1);
			rolesTrackArray[randValue] = 1;
			strcpy(details[i].emp[j].role, roles[randValue]);

			randValue = rand() % 100 + 1;
			details[i].emp[j].communication = randValue;

			randValue = rand() % 100 + 1;
			details[i].emp[j].teamwork = randValue;

			randValue = rand() % 100 + 1;
			details[i].emp[j].creativity = randValue;
		}

	}
}

void best(department details[]){
	int total, best, highest = 0;
	char departments[][15] = {"Hr", "Finance", "Marketing", "Logistics"};
	for (int i = 0; i < 4; ++i)
	{
		total = 0;
		for (int j = 0; j < 5; ++j)
		{
			total += details[i].emp[j].teamwork + details[i].emp[j].creativity + details[i].emp[j].communication;
		}
		printf("totals of %s: %d\n", departments[i], total);
		if (total > highest)
		{
			highest = total;
			best = i;
		}
	}
	printf("Best Department is %s: %d\n", departments[best], highest);
	printf("|%*s| %*s| %13s| %11s| %9s|\n", 20, "Employee Name", 20, "Employee Role", "Communication", "Creativity", "Teamwork");
	for (int i = 0; i < 5; ++i)
	{
		printf("|%*s| %*s| %13d| %11d| %9d|\n",20, details[best].emp[i].name, 20, details[best].emp[i].role, details[best].emp[i].communication, details[best].emp[i].creativity, details[best].emp[i].teamwork);
	}
}

int main(){
	char names[][20] = {"Harry",
        "James",
        "Potter",
        "Ronald",
        "Weasly",
        "Hermione",
        "Jean",
        "Granger",
        "Rubeus",
        "Hagrid",
        "lily",
        "luna",
        "Sirius",
        "Black",
        "Lupin",
        "Remus",
        "Draco",
        "Malfoy",
        "Tom",
        "Riddle"};
	char roles[][15] = {"Director", "Executive", "Manager", "Employee", "Trainee"}; 
	department details[4];
	printf("Name: Emaan Arshad\nRoll-No: 23I-2560\n");
	data(names, roles, details);
	best(details);
}

