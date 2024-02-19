#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("WELCOME SUM OF FIRST n NUMBERS PROGRAM\n");
    printf("ENTER A NUMBER\n");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("SUM OF FIRST %d NUMBERS IS %d\n", num, sum);
    return 0;
}