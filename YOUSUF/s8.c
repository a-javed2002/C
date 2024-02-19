#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void storeData(int n);
void showData(int n);
void searchByAuthor(int n);
void searchByTitle(int n);

// 0 --> Issued
// 1 --> Not Issued ----> Available In library

struct Library
{
    char accession_number[20], author[20], book_title[20];
    int flag;
} lib[100];

int main()
{
    system("color 70");
    int total_books = 0;
    int opt;
    int x = 0;
    while (1)
    {
        char temp[100] = {""};
        printf("1 - Display book information\n2 - Add a new book\n3 - Display all the books in the library of a particular author\n");
        printf("4 - Display the number of books of a particular title\n5 - Display the total number of books in the library\n6 - Issue a book\n7 - Exit The Program\n");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            showData(total_books);
            break;
        case 2:
            total_books++;
            storeData(total_books);
            break;
        case 3:
            searchByAuthor(total_books);
            break;
        case 4:
            searchByTitle(total_books);
            break;
        case 5:
            printf("total Books In library: %d\n", total_books);
            break;
        case 6:
            printf("To issue book\nEnter Book Accession Number: \n");
            scanf("%s", &temp);
            for (int i = 0; i < total_books - 1; i++)
            {
                if (strcmp(temp, lib[i].accession_number) == 0)
                {
                    x++;
                    printf("\nBook %d\n", i + 1);
                    printf("\tAccession Number: %s\n", lib[i].accession_number);
                    printf("\tBook Title: %s\n", lib[i].book_title);
                    printf("\tAuthor Of Book: %s\n", lib[i].author);
                    printf("\n\n");
                    lib[i].flag = 0;
                    break;
                }
                if (x == 0)
                {
                    printf("\nNo Record Found...!!!\n\n");
                }
            }
            x = 0;
            break;
        case 7:
            return 0;
            break;
        default:
            break;
        }
    }

    return 0;
}

void storeData(int n)
{
    n--;
    printf("Adding Book %d\n", n + 1);
    printf("Enter Accession Number: ");
    scanf("%s", lib[n].accession_number);
    printf("Enter Book Title: ");
    scanf("%s", lib[n].book_title);
    printf("Enter Author Of Book: ");
    scanf("%s", lib[n].author);
    printf("Enter Flag\t(1:available\t0:not available): ");
    scanf("%d", &lib[n].flag);
    printf("\n\n\n");
}

void showData(int n)
{
    int count = 0;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x++;
        if (lib[i].flag == 0)
        {
            count++;
        }
        printf("\nBook %d\n", i + 1);
        printf("\tAccession Number: %s\n", lib[i].accession_number);
        printf("\tEnter Book Title: %s\n", lib[i].book_title);
        printf("\tEnter Author Of Book: %s\n", lib[i].author);
        printf("\tFlag: %d\n", lib[i].flag);
        printf("\n");
    }
    if (x == 0)
    {
        printf("\nNo Record Found...!!!\n\n");
    }
    else
    {
        printf("Total Books Are %d\n", n);
        printf("Issued Books Are %d\n", count);
    }
}

void searchByAuthor(int n)
{
    char temp[100];
    int x = 0;
    printf("Enter Name Of Author\n");
    scanf("%s", &temp);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(temp, lib[i].author) == 0)
        {
            x++;
            printf("\nBook %d\n", i + 1);
            printf("\tAccession Number: %s\n", lib[i].accession_number);
            printf("\tBook Title: %s\n", lib[i].book_title);
            printf("\tAuthor Of Book: %s\n", lib[i].author);
            printf("\n\n");
        }
    }
    if (x == 0)
    {
        printf("\nNo Record Found...!!!\n\n");
    }
}

void searchByTitle(int n)
{
    char temp[100];
    int x = 0;
    printf("Enter Title Of Book\n");
    scanf("%s", &temp);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(temp, lib[i].book_title) == 0)
        {
            x++;
            printf("\nBook %d\n", i + 1);
            printf("\tAccession Number: %s\n", lib[i].accession_number);
            printf("\tBook Title: %s\n", lib[i].book_title);
            printf("\tAuthor Of Book: %s\n", lib[i].author);
            printf("\n\n");
        }
    }
    if (x == 0)
    {
        printf("\nNo Record Found...!!!\n\n");
    }
}