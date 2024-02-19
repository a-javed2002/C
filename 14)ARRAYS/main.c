#include <stdio.h>
int main()
{
    int marks[4];
    int c[7] = {1,2,3,4,5,6,7}; //declaration with initialization...don't write 7...it is not necessary..it will count...but this is not happen in 2D arrays
    marks[0] = 32;
    marks[1] = 2;
    marks[2] = 32;
    marks[3] = 3;
    for (int i = 0; i < 4; i++)
    {
        printf("MARKS OF STUDENT %d IS %d\n",i + 1,marks[i]);
    }
    marks[2] = 100;
    printf("MARKS OF STUDENT 3 IS %d\n",marks[2]); //over write
    for (int j = 0; j < 7; j++)
    {
        printf("CLASS %d\n",c[j]);
    }
    return 0;
}
