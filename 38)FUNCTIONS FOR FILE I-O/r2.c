#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *MergeArray(int *Array1, int size1, int *Array2, int size2)
{
    int sum;
    sum = size1 + size2;
    int *ptr;
    ptr = (int *)calloc(sum, sizeof(int));
    int i, j;
    for (i = 0; i < size1; i++)
    {
        ptr[i] = Array1[i];
    }
    int c = 0;
    for (i; i < sum; i++)
    {
        ptr[i] = Array2[c];
        c++;
    }
    return ptr;
}

int main()
{
    int i, j;
    int a[5], b[7];
    printf("Enter elements in 1st array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter elements in 2nd array:\n");
    for (j = 0; j < 7; j++)
    {
        scanf("%d", &b[j]);
    }
    printf("\n");

    int *ptr2;
    ptr2 = MergeArray(a, 5, b, 7);
    int sum = 5 + 7;
    for (i = 0; i < sum; i++)
    {
        printf("%d\n", ptr2[i]);
    }

    free(ptr2);

    return 0;
}