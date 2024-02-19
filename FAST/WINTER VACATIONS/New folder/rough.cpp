#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>
int remove_duplicate_elements(int arr[], int n);
int main()
{
    int times;
    printf("ENTER NUMBER OF TEST CASES\n");
    scanf("%d", &times);
    getchar();
    system("cls");
    for (int g = 0; g < times; g++)
    {
        // printf("running\n");//for testing
        char s[50], temp;
        int arr[50], i = 0;
        printf("TEST CASE %d\n", g + 1);
            printf("Enter a Word...in lowercase\n");
        printf("abcdefghijklmnopqrstuvwxyz\n");
        gets(s);
        // printf("%d\n",strlen(s));
        while (s[i] != '\0') // we can use length of word..to make a loop
        {
            // printf("in loop\n")//for testing;
            if (s[i] == 'a')
            {
                // printf("a\n");
                arr[i] = 1;
            }
            else if (s[i] == 'b')
            {
                // printf("b\n");
                arr[i] = 2;
            }
            else if (s[i] == 'c')
            {
                // printf("c\n");
                arr[i] = 3;
            }
            else if (s[i] == 'd')
            {
                // printf("d\n");
                arr[i] = 4;
            }
            else if (s[i] == 'e')
            {
                // printf("e\n");
                arr[i] = 5;
            }
            else if (s[i] == 'f')
            {
                // printf("f\n");
                arr[i] = 6;
            }
            else if (s[i] == 'g')
            {
                // printf("g\n");
                arr[i] = 7;
            }
            else if (s[i] == 'h')
            {
                // printf("h\n");
                arr[i] = 8;
            }
            else if (s[i] == 'i')
            {
                // printf("i\n");
                arr[i] = 9;
            }
            else if (s[i] == 'j')
            {
                // printf("j\n");
                arr[i] = 10;
            }
            else if (s[i] == 'k')
            {
                // printf("k\n");
                arr[i] = 11;
            }
            else if (s[i] == 'l')
            {
                // printf("l\n");
                arr[i] = 12;
            }
            else if (s[i] == 'm')
            {
                // printf("m\n");
                arr[i] = 13;
            }
            else if (s[i] == 'n')
            {
                // printf("n\n");
                arr[i] = 14;
            }
            else if (s[i] == 'o')
            {
                // printf("o\n");
                arr[i] = 15;
            }
            else if (s[i] == 'p')
            {
                // printf("p\n");
                arr[i] = 16;
            }
            else if (s[i] == 'q')
            {
                // printf("q\n");
                arr[i] = 17;
            }
            else if (s[i] == 'r')
            {
                // printf("r\n");
                arr[i] = 18;
            }
            else if (s[i] == 's')
            {
                // printf("s\n");
                arr[i] = 19;
            }
            else if (s[i] == 't')
            {
                // printf("t\n");
                arr[i] = 20;
            }
            else if (s[i] == 'u')
            {
                // printf("u\n");
                arr[i] = 21;
            }
            else if (s[i] == 'v')
            {
                // printf("v\n");
                arr[i] = 22;
            }
            else if (s[i] == 'w')
            {
                // printf("w\n");
                arr[i] = 23;
            }
            else if (s[i] == 'x')
            {
                // printf("x\n");
                arr[i] = 24;
            }
            else if (s[i] == 'y')
            {
                // printf("y\n");
                arr[i] = 25;
            }
            else if (s[i] == 'z')
            {
                // printf("z\n");
                arr[i] = 26;
            }
            i++;
        }

        // printf("i is %d\n", i); // for testing
        // printf("\nTHE VALUES ARE:");
        // for (int j = 0; j < i; j++) // for testing
        // {
        //     printf("%d ", arr[j]);
        // }

        int n = strlen(s);
        // printf("\nn is %d\n", n); // for testing

        n = remove_duplicate_elements(arr, n);

        // printf("\n");

        // printf("\nn is %d\n", n); // for testing
        // printf("\nTHE VALUES OF arr ARE:");//for testing the new array
        // for (int q = 0; q < n; q++)
        // {
        //     printf("%d ", arr[q]);
        // }

        int result = 0, temp2;
        for (int x = 0; x < (n - 1); x++)
        {
            temp2 = (arr[x + 1]) - (arr[x]); // 8,5,12,15
            if (temp2 < 0)
            {
                temp2 = temp2 * (-1);
            }
            result = (result) + (temp2);
        }
        printf("\nIT TAKES %d UNITS OF TIMES TO PRINT THE WORD \"%s\"\n", result, s);
        printf("\n");
    }

    return 0;
}
int remove_duplicate_elements(int arr[], int n)
{
    if (n == 0 || n == 1)
        return n;

    int temp[n];

    int j = 0;
    int i;
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[n - 1];

    for (i = 0; i < j; i++)
    {
        arr[i] = temp[i];
    }

    return j;
}