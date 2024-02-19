#include <stdio.h>

int main()
{
    int arr[100], frequency[100];
    int n, i, j, count;

    printf("Enter n of array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
    printf("Enter element-%d in array: ",(i+1));
        scanf("%d", &arr[i]);

        frequency[i] = -1;
    }


    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            /* If duplicate element is found */
            if (arr[i] == arr[j])
            {
                count++;
                /* Make sure not to count frequency of same element again */
                frequency[j] = 0;
            }
        }

        /* If frequency of current element is not counted */
        if (frequency[i] != 0)
        {
            frequency[i] = count;
        }
    }


    printf("\nFrequency of all elements of array : \n");
    for (i = 0; i < n; i++)
    {
        if (frequency[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], frequency[i]);
        }
    }

    return 0;
}