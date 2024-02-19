#include <stdio.h>
int main()
{
    char firstName[30], lastName[30], temp[30];
    int i, count1 = 0, count2 = 0;
    printf("Enter First Name\n");
    for (i = 0; i < 30; i++)
    {
        scanf("%c", &temp[i]);
        if (temp[i] == 10)
        {
            break;
        }
        else
        {
            count1++;
            firstName[i] = temp[i];
        }
    }
    printf("Enter Last Name\n");
    for (i = 0; i < 30; i++)
    {
        scanf("%c", &temp[i]);
        if (temp[i] == 10)
        {
            break;
        }
        else
        {
            count2++;
            lastName[i] = temp[i];
        }
    }

    printf("Name Is ");
    for (i = 0; i < count1; i++)
    {
        printf("%c", firstName[i]);
    }
    printf(" ");
    for (i = 0; i < count2; i++)
    {
        printf("%c", lastName[i]);
    }

    printf("\ncharacter length is %d\n", (count1 + count2));
    return 0;
}