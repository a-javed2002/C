#include <stdio.h>
int main()
{
    int x[5], i, sum = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Enter number ", (i+1));
        scanf("%d", &x[i]);
        if (x[i] > 0)
        {
            sum += x[i];
        }
    }
    printf("\nThe Sum Of Positive Numbers Are %d\n", sum);
    return 0;
}