#include <stdio.h>
int main()
{
    int start, end, count = 0;
    printf("Enter Starting And Ending Of Range\n");
    scanf("%d %d", &start, &end);
    printf("\nstart and end is %d %d\n", start, end);
    int temp[100]; // can be set Dynamically

    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            temp[count] = i;
            count++;
        }
    }

    if (count != 0)
    {
        printf("Total Divisible by 2 Are: %d That Are Listed Below\n", count);
        for (int i = 0; i < count; i++)
        {
            printf("%d\t", temp[i]);
        }
    }
    else
    {
        printf("No Divisible By 2 Found\n");
    }
    return 0;
}