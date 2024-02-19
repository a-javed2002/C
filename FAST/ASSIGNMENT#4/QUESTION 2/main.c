#include <stdio.h>
int main()
{
    int num, result, array[10], i = 0;
    printf("ENTER A NUMBER..TO GETS DIGITS SUM\n");
    scanf("%d", &num);
    while (num != 0)
    {
        result = num - ((num / 10) * 10);
        num = num / 10;
        array[i] = result;
        i++;
    }
    result = 0;
    for (int j = 0; j < i; j++)
    {
        result = result + array[j];
    }
    printf("THE SUM OF DIGITS ARE %d\n", result);
    return 0;
}