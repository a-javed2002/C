#include <stdio.h>
int main()
{
    int arr[] = {2, 3, 8, 5, 3, 6, 99, 64, 2};
    int temp;
    for (int i = 0; i < 9; i++)
    {
        for (int i = 0; i < 9; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("THE SORTED ARRAY ");
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}