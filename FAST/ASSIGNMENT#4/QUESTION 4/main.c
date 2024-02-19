#include <stdio.h>
void display(int arr[])
{
    int sum = 0, min = 99999, max = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("THE SUM IS %d\n", sum);
    printf("THE MAXIMUM NUMBER IS %d\n", max);
    printf("THE MINIMUM NUMBER IS %d\n", min);
}
int main()
{
    int number[10];
    for (int i = 0; i < 10; i++)
    {
        printf("ENTER VALUE AT INDEX %d\n", i + 1);
        scanf("%d", &number[i]);
    }
    display(number);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",number[i]);
    }
    return 0;
}
// sum,min,max..