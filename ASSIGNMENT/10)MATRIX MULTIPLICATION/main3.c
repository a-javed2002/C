// r1 x c1...r2 x c2..if c1=r2..then ok..
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int r1, c1, r2, c2;
    int matA[2][2];
    int matB[2][2];
    // printf("ENTER SIZE OF FIRST MATRIX\n");
    // printf("ENTER ROWS\n");
    // scanf("%d", &r1);
    // printf("ENTER COLUMNS\n");
    // scanf("%d", &c1);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("ENTER VALUE FOR %d,%d\n",i,j);
            scanf("%d",matA[i][j]);
        }
    }

    // printf("ENTER SIZE OF SECOND MATRIX\n");
    // printf("ENTER ROWS\n");
    // scanf("%d", &r2);
    // printf("ENTER COLUMNS\n");
    // scanf("%d", &c2);
    for (int p = 0; p < 2; p++)
    {
        for (int q = 0; q < 2; q++)
        {
            printf("ENTER VALUE FOR %d %d\n",p,q);
            scanf("%d",matB[p][q]);
        }
    }

    system("cls");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("ENTER VALUE FOR %d %d %d",i,j,matA[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("ENTER VALUE FOR %d %d %d",i,j,matB[i][j]);
        }
        printf("\n");
    }

    return 0;
}