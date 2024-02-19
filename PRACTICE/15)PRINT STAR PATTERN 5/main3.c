#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
    int num, j = 0, temp = 0;
    printf("ENTER A NUMBER\n");
    scanf("%d", &num);
    temp = 2;
    for (int i = 0; i < num; i++)
    {
        if (i == 0 && j == 0)
        {
            for (int m = 0; m < num; m++)
            {
                printf("*");
            }
            printf("\n");
        }
        else if (temp < num)
        {
            printf("*");
            for (int k = 0; k < (num - 2); k++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
            temp++;
        }
        else
        {
            for (int n = 0; n < num; n++)
            {
                printf("*");
            }
        }
    }
    return 0;
}