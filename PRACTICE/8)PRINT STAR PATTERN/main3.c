#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
    int num;
    printf("ENTER MAXIMUM STARS\n");
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < (i+1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}