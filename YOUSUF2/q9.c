// C program to interchange the rows in matrix

#include <stdio.h>

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int n1, n2, temp;

    printf("matrix before row exchange:\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf(" %d", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Enter row you want to change:");
    scanf("%d", &n1);
    printf("Enter row from which you want to change:");
    scanf("%d", &n2);

    for (int i = 0; i < 3; ++i)
    {
        // -1 kara...bcz array element starts from zero '0'
        temp = matrix[n1 - 1][i];
        matrix[n1 - 1][i] = matrix[n2 - 1][i];
        matrix[n2 - 1][i] = temp;
    }

    printf("matrix after row exchange:\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf(" %d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
