#include <stdio.h>
int main()
{
    int arr[5][9], sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("For Student %d\n", (i + 1));
        for (int j = 0; j < 7; j++)
        {
            if (j == 0)
            {
                printf("Enter Student ID: ");
                scanf("%d", &arr[i][j]);
            }
            else if (j == 6)
            {
                printf("total %d\n",sum);
                arr[i][j] = 500;
                arr[i][j + 1] = sum;
                arr[i][j + 2] = (sum * 100) / 500;
            }
            else
            {
                printf("Enter C%d-Marks: ", j);
                scanf("%d", &arr[i][j]);
                sum += arr[i][j];
                printf("%d\n",sum);
            }
        }
        printf("\n");
        sum = 0;
    }

    printf("ID,C1-Marks,C2-Marks,C3-Marks,C4-Marks,C5-Marks,total,obtained,percentage\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}