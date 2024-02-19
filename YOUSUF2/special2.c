#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char newString[10][10];
    int i, j, ctr;

    char name[30], ID[20], section[10];

    printf("Enter Your Name\n");
    scanf("%s", name);
    getchar();
    printf("Enter Your ID\n");
    scanf("%s", ID);
    getchar();
    printf("Enter Your Section\n");
    scanf("%s", section);
    getchar();
    printf("Input  a string : ");
    fgets(str1, sizeof str1, stdin);

    j = 0;
    ctr = 0;
    for (i = 0; i <= (strlen(str1)); i++)
    {
        // if space or NULL found, assign NULL into newString[ctr]
        if (str1[i] == ' ' || str1[i] == '\0')
        {
            newString[ctr][j] = '\0';
            ctr++; // for next word
            j = 0; // for next word, init index to 0
        }
        else
        {
            newString[ctr][j] = str1[i];
            j++;
        }
    }
    // printf("\n Strings or words after split by space are :\n");
    for (i = 0; i < ctr - 1; i++)
    {
        // printf(" %s----%c----%d\n", newString[i], newString[i][0], strlen(newString[i]));
        if (newString[i][0] == 'a' || newString[i][0] == 'e' || newString[i][0] == 'i' || newString[i][0] == 'o' || newString[i][0] == 'u')
        {
            // printf("vowels\n");
            strcat(newString[i], "way");
        }
        else if (newString[i][0] == 'y')
        {
            int size = strlen(newString[i]);
            char temp[100] = {""};
            temp[0] = newString[i][size - 3];
            temp[1] = newString[i][size - 2];
            temp[2] = newString[i][size - 1];
            for (int j = 3; j < size; j++)
            {
                temp[j] = newString[i][j - 3];
            }
            strcpy(newString[i], temp);
            strcat(newString[i], "ay");
            // printf("Y\n");
        }
        else if (newString[i][0] == 's' && newString[i][1] == 'c' && newString[i][2] == 'h')
        {
            int size = strlen(newString[i]);
            char temp[100] = {""};
            for (int j = 0; j < size; j++)
            {
                temp[j] = newString[i][j + 3];
            }
            strcpy(newString[i], temp);
            strcat(newString[i], "skay");
            // printf("sch\n");
        }
        else
        {
            int size = strlen(newString[i]);
            char temp[100] = {""};
            temp[0] = newString[i][size - 2];
            temp[1] = newString[i][size - 1];
            for (int j = 2; j < size; j++)
            {
                temp[j] = newString[i][j - 2];
            }
            strcpy(newString[i], temp);
            strcat(newString[i], "ay");
            // printf("%s %d %c %c %c consonant\n", newString[i], size, newString[i][0], newString[i][1], newString[i][2]);
        }
    }

    printf("Name\tID\t\tSection\n");
    printf("%s\t%s\t%s\n\n", name, ID, section);
    for (int i = 0; i < ctr; i++)
    {
        printf("%s ", newString[i]);
    }
    return 0;
}