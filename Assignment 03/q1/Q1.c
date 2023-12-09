/**
 * Programmer: Emaan Arshad
 * Desc: Max sub Matrix in 2x2 or 4x4 or 8x8
 * Date: 09/12/2023
 * Roll-No: 23I-2560
 */ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void studentData(char name[]){
	printf("Name: Emaan Arshad\nStudent Id: ");
	for (int i = 3; i < strlen(name); i++) {
		printf("%c", name[i]);
    }
	printf("\n");
}

void sub(int row, int col, int **originalArray, int **submatrix){
	int subMatrixRow = 0, subMatrixCol = 0;
	for (int i = 0; i < row; i+= 2)
	{
		subMatrixCol = 0;
		for (int j = 0; j < col; j+=2)
		{
			int highest = originalArray[i][j];
			for (int x = i; x < i + 2; x++)
			{
				for (int y = j; y < j + 2; y++)
				{
					if (originalArray[x][y] > highest)
						highest = originalArray[x][y];
				}
			}
			submatrix[subMatrixRow][subMatrixCol] = highest;
			subMatrixCol++;
		} // end of for loop
		subMatrixRow++;
	} // end of for loop	
}

int main(int argc, char const *argv[])
{
	if (argc < 2)
		return 1;
	FILE *ptr = fopen(argv[1], "r");
	if (ptr == NULL)
	{
		printf("No file found\n");
		return 1;
	} // end of if
	char name[8];
	printf("Enter Id: ");
    getchar();
	fgets(name, 8, stdin);
	int row;
	printf("Enter Dimensions of the Matrix: ");
	scanf("%d", &row);
	int **originalArray = (int **)malloc(row * sizeof(int *));
	for (int i = 0; i < row; i++) {
		originalArray[i] = (int *)malloc(row * sizeof(int));
    }
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++) {
			fscanf(ptr, "%d", &originalArray[i][j]);
        }
	}// end of foor loop
	int **submatrix = (int **)calloc(row/2, sizeof(int *));
	for (int i = 0; i < row/2; i++)
		submatrix[i] = (int *)calloc(row/2, sizeof(int));
	sub(row, row, originalArray, submatrix);
	studentData(name);
	for (int i = 0; i < row/2; i++)
	{
		for (int j = 0; j < row/2; j++) {
			printf("%d ", submatrix[i][j]);
		}
		printf("\n");		
	}
} // end main
