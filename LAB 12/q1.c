#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLENGTH 100
#define COLUMNS 100

int main()
{
    FILE *filePointer;
    filePointer = fopen("Sample-Spreadsheet-10-rows.csv", "r");
    if (!filePointer)
    {
        printf("Error opening the file");
        return 1;
    }

    int row = 0, col = 0;
    char *mytoken;
    char fileheaders[COLUMNS][MAXLENGTH];
    char myline[MAXLENGTH];

    fgets(myline, MAXLENGTH, filePointer);
    printf("%s\n\n", myline);

    mytoken = strtok(myline, ",");
    while (mytoken != NULL && col < COLUMNS)
    {
        strcpy(fileheaders[col++], mytoken);
        mytoken = strtok(NULL, ",");
    }
int index;
    for (index = 0; index < col; index++)
    {
        printf("%s\t|", fileheaders[index]);
    }
    printf("\n");

    while (fgets(myline, MAXLENGTH, filePointer) != NULL)
    {
        row++;
        col = 0; // Reset col for each row
        mytoken = strtok(myline, ",");
        while (mytoken != NULL && col < COLUMNS)
        {
            printf("%s\t|", mytoken);
            mytoken = strtok(NULL, ",");
            col++;
        }
        printf("\n");
    }
    printf("Total Rows: %d\nTotal Columns: %d\n", row, col);

    fclose(filePointer);

    return 0;
}
