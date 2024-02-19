#include <stdio.h>
#include <string.h>
int main()
{

    char mon[6][10] =
        {"January", "February", "March", "April", "May", "Total"};
    char dep[6][10] =
        {"Surgery", "Emergency", "Skin", "Covid-19", "Dentistry", "Total"};
    float expense[5][5] = {{1, 2, 3, 4, 5}, {6, 47, 8, 39, 10}, {31, 22, 3, 34, 5}, {16, 17, 8, 9, 10}, {21, 22, 3, 14, 5}};

    printf("\t\t");
    for (int i = 0; i < 6; i++)
    {
        printf("%s ", mon[i]);
    }

    printf("\n\nDepartment\n\n");
    float sum = 0;
    for (int i = 0; i < 6; i++)
    {
        printf("%s\t\t", dep[i]);
        if (i != 5)
        {
            for (int j = 0; j < 6; j++)
            {
                if (j != 5)
                {
                    printf("%.2f\t", expense[i][j]);
                    sum += expense[i][j];
                }
                else
                {
                    printf("%.2f\n", sum);
                    sum = 0;
                }
            }
        }
        else
        {
            for (int p = 0; p < 5; p++)
            {
                for (int q = 0; q < 5; q++)
                {
                    sum+=expense[q][p];
                }
                printf("%.2f\t",sum);
            }
        }
        printf("\n\n");
    }

    return 0;   
}