#include <stdio.h>
int main()
{
    int row, column, x[row][column], transpose[row][column], count = 0;
    printf("Enter Rows: \n");
    scanf("%d", &row);
    printf("Enter Columns: \n");
    scanf("%d", &column);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter Element [%d,%d] : ", (i + 1), (j + 1));
            scanf("%d", &x[i][j]);
        }
    }

    printf("\nOriginal Matrix Optional Printing\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }

    // computing the transpose
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < column; ++j)
        {
            transpose[j][i] = x[i][j];
        }

    printf("\nTranspose Matrix Optional Printing\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}