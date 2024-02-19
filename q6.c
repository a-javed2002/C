#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>
int main()
{
    int dob, lsdhn, lsdisd, msdby, bm;
    printf("Enter Date Of Birth DOB\n");
    scanf("%d", &dob);
    printf("Enter Least Significant Digit of your house number\n");
    scanf("%d", &lsdhn);
    printf("Enter Least Significant Digit of your student ID\n");
    scanf("%d", &lsdisd);
    printf("Enter Most Significant Digit of your birth year\n");
    scanf("%d", &msdby);
    printf("Enter Birth Month (1-12)\n");
    scanf("%d", &bm);

    printf("%d %d %d %d %d\n", dob, lsdhn, lsdisd, msdby, bm);

    int arr[3][4] = {{bm, 6, 10, lsdhn}, {3, 4, lsdisd, 23}, {45, 100, msdby}}; // 3 cars and 4 data

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("arr[%d] [%d] = %d \n", i, j, arr[i][j]);
        }
    }
    return 0;
}