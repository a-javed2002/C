#include <stdio.h>
int main()
{
    int matrix[3][3] = {
        {1, 6, 0},
        {0, 0, 0},
        {4, 0, 5}},
        zero = 0;
    ;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",matrix[i][j]);
            if (matrix[i][j] == 0)
            {
                zero++;
            }
        }
        printf("\n");
    }
    if (zero>=((3*3)/2))
    {
        printf("Sparse Matrix\n");
    }
    else
    {
        printf("Not A Sparse Matrix\n");
    }
    
    return 0;
}