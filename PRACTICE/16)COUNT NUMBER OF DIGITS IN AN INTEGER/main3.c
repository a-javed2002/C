#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
    int num, result = 0, count = 0, temp = 0;
    printf("ENTER A NUMBER\n");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        result = num - ((num / 10) * 10);
        num = num / 10;
        count++;
    }
    if (count == 0 || count == 1)
    {
        printf("%d HAS 1 DIGIT\n", temp);
    }
    else
    {
        printf("%d HAS %d DIGITS\n", temp, count);
    }
    return 0;
}