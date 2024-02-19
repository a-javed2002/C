#include <stdio.h>
int main()
{
    int arr[6], symmetric = 1;
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    // printf("%d\n", arr_size);
    for (int i = 0; i < arr_size; i++)
    {
        printf("Enter Element %d : ", (i + 1));
        scanf("%d", &arr[i]);
    }

    // even numbers
    int temp = arr_size - 1;
    for (int i = 0; i < arr_size / 2; i++)
    {
        // printf("%d and %d\n", arr[i], arr[temp]);
        if (arr[i] == arr[temp])
        {
            temp--;
            continue;
        }
        else
        {
            symmetric = 0;
            break;
        }
    }

    if (symmetric)
    {
        printf("Array Is symmetric\n");
    }
    else
    {
        printf("Array Is Asymmetric\n");
    }
    return 0;
}