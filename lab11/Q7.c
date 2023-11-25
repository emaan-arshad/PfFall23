/* Programmer: Emaan Arrshad
  date:25/11/23
  desc: on the menu of a library. Create a structure containing book information like
accession number, name of author, book title and flag to know whether book is issued or not.
Create a menu in which the following can be done.
1 - Display book information
2 - Add a new book
3 - Display all the books in the library of a particular author
4 - Display the number of books of a particular title
5 - Display the total number of books in the library
6 - Issue a book
(If we issue a book, then its number gets decreased by 1 and if we add a book, its number gets
increased by 1)
  */
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

struct books {
    int accessionno;
    char author[50];
    char name[100];
    bool flag;
    int number_books;
   
};

int main() {

    struct books data[100] = {
          {1001, "J.K. Rowling", "Harry Potter and the Sorcerer's Stone", true, 5},
        {1002, "George Orwell", "1984", true, 8},
        {1003, "Jane Austen", "Pride and Prejudice", false, 3},
        {1004, "Jane Austen", "Persuauion", true, 7},
        {1005, "J.R.R. Tolkien", "The Hobbit", true, 6},
        {1006, "F. Scott Fitzgerald", "The Great Gatsby", false, 2},
        {1007, "Agatha Christie", "Murder on the Orient Express", true, 4},
        {1008, "Ernest Hemingway", "The Old Man and the Sea", false, 1},
        {1009, "Arthur Conan Doyle", "The Adventures of Sherlock Holmes", true, 10},
        {1010, "Gabriel Garcia Marquez", "One Hundred Years of Solitude", true, 9},
        {1011, "J.K. Rowling", "Harry Potter and the Chamber of Secrets", true, 4},
        {1012, "George Orwell", "Animal Farm", true, 6},
        {1013, "Jane Austen", "Sense and Sensibility", false, 2},
        {1014, "Harper Lee", "Go Set a Watchman", true, 5},
        {1015, "J.R.R. Tolkien", "The Lord of the Rings", true, 3},
        {1016, "F. Scott Fitzgerald", "Tender Is the Night", false, 1},
        {1017, "Agatha Christie", "And Then There Were None", true, 3},
        {1018, "Ernest Hemingway", "For Whom the Bell Tolls", false, 2},
        {1019, "Arthur Conan Doyle", "The Hound of the Baskervilles", true, 7},
        {1020, "Gabriel Garcia Marquez", "Love in the Time of Cholera", true, 8}
    };
    int f = 20;

    int choice;
    while (1) {
        printf("Welcome to our library:\n");
        printf("Enter 1 to display information for a book\n");
        printf("Enter 2 to add a new book\n");
        printf("Enter 3 to display all the books in the library of a particular author\n");
        printf("Enter 4 to display number of books of a particular title\n");
        printf("Enter 5 to display the total number of in the library\n");
        printf("Enter 6 to issue a book\n");
        printf("Enter 7 to quit\n");
        scanf("%d", &choice);

        if (choice == 7) {
            break;
        }

        char name[50];
        bool flag = false;
        switch (choice) {
            case 1:
                printf("Enter book name: ");
                getchar(); 
                fgets(name, sizeof(name), stdin);
                for (int i = 0; i < 100; i++) {
                    if (strcmp(name, data[i].name) == 0) {
                        printf("Book %d:\n", i + 1);
                        printf("Accession Number: %d\n", data[i].accessionno);
                        printf("Author: %s\n", data[i].author);
                        printf("Book Name: %s\n", data[i].name);
                        printf("Availability: %s\n", data[i].flag ? "Available" : "Not Available");
                        printf("Number of Books: %d\n", data[i].number_books);
                        flag = true;
                        break;
                    }
                }
                if (!flag) {
                    printf("Sorry not available\n");
                }
                break;

            case 2:
                printf("Enter book name: ");
                getchar();  
                fgets(name, sizeof(name), stdin);
                for (int i = 0; i < 100; i++) {
                    if (strcmp(name, data[i].name) == 0) {
                        data[i].number_books++;
                        flag = true;
                        printf("Successfully added\n");
                        break;
                    }
                }
                if (!flag) {
                    printf("Enter following information for your book:\n");
                    printf("Accession Number:");
                    scanf("%d", &data[f].accessionno);
                    printf("Author: ");
                    scanf("%s", data[f].author);
                    printf("Book Name: ");
                    getchar();  
                    fgets(data[f].name, sizeof(data[f].name), stdin);
                    printf("Availability: ");
                    scanf("%d", &data[f].flag);
                    printf("Number of Books: ");
                    scanf("%d", &data[f].number_books);
                    f++;
                }
                break;

            case 3:
                printf("Enter author name: ");
                getchar(); 
                fgets(name, sizeof(name), stdin);
                for (int i = 0; i < 100; i++) {
                    if (strcmp(name, data[i].author) == 0) {
                        printf("\n\nBook %d:\n", i + 1);
                        printf("Accession Number: %d\n", data[i].accessionno);
                        printf("Author: %s\n", data[i].author);
                        printf("Book Name: %s\n", data[i].name);
                        printf("Availability: %s\n", data[i].flag ? "Available" : "Not Available");
                        printf("Number of Books: %d\n", data[i].number_books);
                        flag = true;
                        break;
                    }
                }
                if (!flag) {
                    printf("Sorry not available\n");
                }
                break;

            case 4:
                printf("Enter book name: ");
                getchar();  
                fgets(name, sizeof(name), stdin);
                for (int i = 0; i < 100; i++) {
                    if (strcmp(name, data[i].name) == 0) {
                        printf("Number of Books: %d\n", data[i].number_books);
                        flag = true;
                        break;
                    }
                }
                if (!flag) {
                    printf("Sorry not available\n");
                }
                break;

            case 5:
                int total = 0;
                for (int i = 0; i < 100; i++) {
                    total += data[i].number_books;
                }
                printf("%d is the total number of books in the library\n", total);
                break;

            case 6:
                printf("Enter name of the book you want to issue: ");
                getchar();  // Consume the newline character left by previous scanf
                fgets(name, sizeof(name), stdin);
                for (int i = 0; i < 100; i++) {
                    if (strcmp(name, data[i].name) == 0) {
                        data[i].number_books--;
                        flag = true;
                        break;
                    }
                }
                if (!flag) {
                    printf("Sorry not available\n");
                }
                break;

            default:
                printf("Wrong choice\n");
        }
    }

    return 0;
}
