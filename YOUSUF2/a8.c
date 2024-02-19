#include <stdio.h>

int large(int n, int num[])
{
    int largest = num[0];
    for (int i = 1; i < n; i++)
    {
        if (largest < num[i])
        {
            largest = num[i];
        }
    }
    return largest;
}

int main()
{
    int n, largest;
    int num[50];
    printf("Enter number of elements you want to enter: \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter Element %d: ", (i + 1));
        scanf("%d", &num[i]);
    }

    largest = large(n, num);

    printf("\nLargest element in array is %d: ", largest);
    return 0;
}

