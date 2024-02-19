#include <stdio.h>
int main()
{
    int num, array[10], i = 0, temp = 0;
    printf("REVERSE YOUR NUMBER\n");
    printf("ENTER A NUMBER\n");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        array[i] = num - ((num / 10) * 10);
        num = num / 10;
        i++;
    }

    printf("THE REVERSED OF NUMBER %d IS ", temp);
    for (int j = 0; j < i; j++)
    {
        printf("%d", array[j]);
    }
    return 0;
}