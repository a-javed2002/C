#include <stdio.h>

struct Data
{
    int val;
} data1[100], data2[100];

int main()
{
    int res = 0;
    printf("Enter 5 integers\n");

    for (int i = 0; i < 5; ++i)
    {
        printf("Enter The Value For A[%d] and B[%d]: ", i, i);
        scanf("%d %d", &data1[i].val, &data2[i].val);
        res += ((data1[i].val) * (data2[i].val));
    }

    printf("A . B = %d\n", res);

    // printf("Displaying integers\n");

    // for (int i = 0; i < 5; ++i)
    // {
    //     printf("%d %d\n", data1[i].val, data2[i].val);
    // }
    return 0;
}
