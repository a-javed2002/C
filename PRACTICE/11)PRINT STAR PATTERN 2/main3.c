/*
 *
 **
 ***
 ****
 */
#include <stdio.h>
int main()
{
    int num,space;
    printf("ENTER MAXIMUM STARS\n");
    scanf("%d", &num);
    space=num-1;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < (space-i); j++)
            {
                printf(" ");
            }
        for (int j = 0; j < (i + 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}