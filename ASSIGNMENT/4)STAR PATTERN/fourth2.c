#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("PRESS 0 TO PRINT TRIANGULAR STAR PATTERN\n");
    printf("PRESS 1 TO PRINT REVERSE TRIANGULAR STAR PATTERN\n");
    printf("PRESS 2 TO PRINT BOTH\n");
    scanf("%d", &d);
    if (d == 0 || d == 1 || d == 2)
    {
        printf("ENTER THE MAXIMUM STARS\n");
        scanf("%d", &a);
        b = a;
        c = 1;
        if (d == 0)
        {
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    printf("*");
                }
                printf("\n");
                b--;
            }
        }
        else if (d == 1)
        {
            for (int p = 0; p < a; p++)
            {
                for (int q = 0; q < c; q++)
                {
                    printf("*");
                }
                printf("\n");
                c++;
            }
        }
        else if (d == 2)
        {
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    printf("*");
                }
                printf("\n");
                b--;
            }
            for (int p = 0; p < a; p++)
            {
                for (int q = 0; q < c; q++)
                {
                    printf("*");
                }
                printf("\n");
                c++;
            }
        }
    }
    else
    {
        printf("INVALID OPTION\n");
    }
    return 0;
}