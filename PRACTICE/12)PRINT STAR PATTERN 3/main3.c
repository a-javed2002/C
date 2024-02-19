// PYRAMID
#include <stdio.h>
int main()
{
    int num, space, length = 1, result;
    printf("ENTER MAXIMUM STARS\n");
    scanf("%d", &num);
    // PROGRAM
    space = (num - 1) / 2;
    for (int i = 0; i < (num + 1) / 2; i++)
    {
        for (int j = 0; j < (space - i); j++)
        {
            printf(" ");
        }
        for (int j = 0; j < length; j++)
        {
            printf("*");
        }
        length = length + 2;
        printf("\n");
    }
    return 0;
}
/*
    *
   ***
  *****
 *******
 */