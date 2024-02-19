// Dynamic Memory Allocation
// ABC Pvt Ltd. manages employee records of other companies.
// Employee Id can be of any length and it can contain any character
// For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
// Then, you have to take employee id as an input and display it on screen.
// Store the employee id in a character array which is allocated dynamically.
// You have to create only one character array dynamically
// EXAMPLE:
// Employee 1:
// Enter no of characters in your eId
// 45
// Dynamically allocate the character array.
// take input from user

// Employee 2:
// Enter no of characters in your eId
// 4
// Dynamically allocate the character array.
// take input from user

// Employee 3:
// Enter no of characters in your eId
// 9
// Dynamically allocate the character array.
// take input from user

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char *ptr;
    int n, length, a;
    printf("ENTER THE NUMBER OF EMPLOYEE\n");
    scanf("%d", &n);
    ptr = (char *)malloc(n * sizeof(char));
    for (int i = 0; i < n; i++)
    {
    again:
        printf("Employee %d:\n", i + 1);
        printf("ENTER THE LENGTH OF ID\n");
        scanf("%d", &length);
        printf("ENTER ID\n");
        scanf("%d", &ptr[i]);
        a = strlen(ptr[i]);
        printf("a is %d",a);
        if (length == a)
        {
            continue;
            printf("cool");
        }
        else
        {
            printf("INVALID ID ENTERED\n");
            goto again;
        }
    }
    system("cls");
    printf("\t\t\tABC Pvt Ltd\n");
    for (int j = 0; j < n; j++)
    {
        printf("Employee %d:\n", j + 1);
        printf("\tID is\n",ptr[j]);
    }
    return 0;
}