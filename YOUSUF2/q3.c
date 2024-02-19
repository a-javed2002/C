#include <stdio.h>
int main()
{
    int x[4][4], transpose[4][4], count = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter number Row %d and Column %d : ", (i + 1), (j + 1));
            scanf("%d", &x[i][j]);
        }
    }

    printf("\nOriginal Matrix Optional Printing\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }

    // computing the transpose
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j)
        {
            transpose[j][i] = x[i][j];
        }

    printf("\nTranspose Matrix Optional Printing\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (x[i][j] == transpose[i][j])
            {
                count++;
            }
        }
    }
    if (count == (4 * 4))
    {
        printf("matrix is symmetric\n");
    }
    else
    {
        printf("matrix is asymmetric\n");
    }
    return 0;
}