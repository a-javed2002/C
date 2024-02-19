#include <stdio.h>
int main()
{
    int n, num[50], largest, second;
    printf("Enter number of elements: \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter Array Element %d: \n", (i + 1));
        scanf("%d", &num[i]);
    }

    if (num[0] < num[1])
    {
        largest = num[1];
        second = num[0];
    }
    else
    {
        largest = num[0];
        second = num[1];
    }
    for (int i = 2; i < n; i++)
    {
        if (num[i] > largest)
        {
            second = largest;
            largest = num[i];
        }
        else if (num[i] > second && num[i] != largest)
        {
            second = num[i];
        }
    }
    printf("Second Largest Element in array is: %d\n", second);
    return 0;
}