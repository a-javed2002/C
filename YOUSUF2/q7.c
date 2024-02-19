#include <stdio.h>
int main()
{
    int arr[] = {1, 1, 2, 3, 4, 4, 5, 5, 6}, size;
    size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size - 1; i++)
    {
        // printf("%d\n", arr[i]);
        if (arr[i] == arr[i + 1])
        {
            printf("%d ", arr[i]);
        }
    }

    // incomplete
    return 0;
}