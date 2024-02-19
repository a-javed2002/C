#include <stdio.h>
int main()
{
    int start = 3, end = 10;
    for (int j = 0; j < 10; j++)
    {
        for (int i = start; i <= end; i++)
        {
            if (i % 2 != 0)
            {
                printf("%d x %d = %d\t", i, (j + 1), (i * (j + 1)));
            }
        }
        printf("\n");
    }
    return 0;
}