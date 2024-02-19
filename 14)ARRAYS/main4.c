#include <stdio.h>
int main()
{
    int marks[2][4] = {{1,2,3,4},{5,6,7,8}}; //rows then column
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d",marks[i][j]); //print in matrix form(table form)
        }
        printf("\n");
    }
    return 0;
}
/* int marks[2][4] = {{1,2,3,4},
                    {5,6,7,8}};*/
                    // 2 rows and 4 columns