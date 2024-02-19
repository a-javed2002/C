#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
    system("color 70");
    int option, a = 1, b = 1, c = 1, d = 0, count = 0, num;
    char ISBN[2][20];
    char title[3][20];
    char author[3][20];
    char temp1[3][20], temp2[3][20];
    int flag[10];
    float price[10];
    char str;
    do
    {
        printf("1. Add book information");
        printf("\t\t\t\t\t 2. Display book information\n");
        printf("3. List all books of given author");
        printf("\t\t\t 4. List the title of specified book\n");
        printf("5. List the count of books in the library number");
        printf("\t 6. List the books in the order of accession\n");
        printf("7. EXIT");
        printf("\nEnter an option number\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("OPTION %d SELECTED\n", option);
            printf("ENTER TITLE OF BOOK\n");
            scanf("%s", &title[count]);
            printf("ENTER AUTHOR NAME\n");
            scanf("%s", &author[count]);
            do
            {
                printf("ENTER 13 DIGITS ISBN NUMBER\n");
                printf("EXAMPLE:ISBN-->9789295055025\n");
                scanf("%s", &ISBN[count]);
                // printf("%d\n",strlen(ISBN[count]));
                if (strlen(ISBN[count]) == 17)
                {
                    b = 0;
                }
            } while (b == 1);
            printf("ENTER PRICE OF BOOK\n");
            scanf("%f", &price[count]);
            do
            {
                printf("ENTER 1 IF BOOK IS AVAILABLE IN LIBRARY\n");
                printf("ENTER 0 IF BOOK IS ISSUED\n");
                scanf("%d", &flag[count]);
                if (flag[count] == 1 || flag[count] == 0)
                {
                    c = 0;
                }
                else
                {
                    continue;
                }
            } while (c == 1);

            break;
        case 2:
            printf("OPTION %d SELECTED\n", option);
            printf("TOTAL BOOKS IN LIBRARY: %d\n", count);
            for (int i = 0; i < count; i++)
            {
                printf("Title: %s\n", title[i]);
                printf("Author: %s\n", author[i]);
                printf("ISBN: %s\n", ISBN[i]);
                printf("Price $%.2f\n", price[i]);
                if (flag[i] == 1)
                {
                    printf("BOOK IS AVAILABLE IN LIBRARY\n");
                }
                else
                {
                    printf("BOOK IS ISSUED\n");
                }
            }
            printf("PRESS ENTER TO CONTINUE...\n");
            scanf("%c", &str);
            getchar();
            break;
        case 3:
            printf("OPTION %d SELECTED\n", option);
            printf("ENTER AUTHOR NAME..TO SEE HIS/HER BOOKS\n");
            scanf("%s", &temp1);
            printf("\n");
            for (int j = 0; j < count; j++)
            {
                if (strcmp(temp1[j],author[j]) == 0)
                {
                    printf("BOOK:%s\n", title[j]);
                    d = 1;
                }
            }
            if (d == 1)
            {
                printf("BOOKS OF AUTHOR: %s\n", temp1);
            }
            else
            {
                printf("NO BOOKS FOUND..\n");
            }
            printf("PRESS ENTER TO CONTINUE...\n");
            scanf("%c", &str);
            getchar();
            break;
        case 4:
            printf("OPTION %d SELECTED\n", option);
            printf("TOTAL BOOKS IN LIBRARY: %d\n", count);
            printf("ENTER BOOK NUMBER\n");
            scanf("%d", &num);
            for (int k = 0; k < count; k++)
            {
                if (num==(k+1))
                {
                    printf("THE BOOK IS '%s'\n",title[k]);
                }
                else
                {
                    printf("NO BOOK FOUND..!!!\n");
                }
            }
            printf("PRESS ENTER TO CONTINUE...\n");
            scanf("%c", &str);
            getchar();
            break;
        case 5:
            printf("OPTION %d SELECTED\n", option);
            printf("TOTAL BOOKS IN LIBRARY: %d\n", count);
            for (int p = 0; p < count; p++)
            {
                printf("BOOK %d: %s\n",p+1,title[p]);
            }
            printf("PRESS ENTER TO CONTINUE...\n");
            scanf("%c", &str);
            getchar();
            break;
        case 6:
            printf("OPTION %d SELECTED\n", option);
            break;
        case 7:
            printf("OPTION %d SELECTED\n", option);
            a = 0;
            break;
        default:
            printf("\nYou have entered the wrong option number. Please try again!\n");
            break;
        }
        count++;
        system("cls");
    } while (a == 1);

    return 0;
}
// 978-92-95055-02-5
// 978...EAN Prefix
// 92...Registration Group
// 95055...Registrant
// 02...Publication
// 5...Check Digit