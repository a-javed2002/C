#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>
int main()
{
    // %3
    // prime
    // %2
    int n;
    printf("Enter A number\n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        if (i % 3 == 0 || i == 0)
        {
            printf("%d\t%d\t%d\t%d\n", i, i, i, i);
        }
        else if (i % 2 != 0)
        {
            printf("\t%d\t%d\n", i, i);
        }
        else if (i % 2 == 0)
        {
            printf("%d\t\t\t%d\n", i, i);
        }
    }
    return 0;
}