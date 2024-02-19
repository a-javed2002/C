#include <stdio.h>
int main()
{
    int arr[] = {2, 3, 8, 5, 3, 6, 99, 64, 2};
    int i, p, t, j;
    for (i = 0; i < 8; i++)
    {
        p = i;
        for (j = i + 1; j < 9; j++)
        {
            if (arr[p] > arr[j])
            {
                p = j;
            }
            if (p != i)
            {
                t = arr[i];
                arr[i] = arr[p];
                arr[p] = t;
            }
        }
    }
    printf("Sorted list in ascending order:\n");
    int c;
    for (c = 0; c < 9; c++)
        printf("%d\n", arr[c]);
}