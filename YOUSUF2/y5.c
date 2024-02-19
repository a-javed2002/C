#include <stdio.h>

void SortFunction(int *arr, int *size, int order)
{
        int a=0;
    switch (order)
    {
    case 1:
        for (int i = 0; i < *size; ++i)
        {

            for (int j = i + 1; j < *size; ++j)
            {

                if (arr[i] > arr[j])
                {

                    a = arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
                }
            }
        }
        printf("The numbers arranged in ascending order are given below \n");
        for (int i = 0; i < *size; ++i)
        {
            printf("%d\n", arr[i]);
        }
        break;
    case 2:
        for (int i = 0; i < *size; ++i)
        {

            for (int j = i + 1; j < *size; ++j)
            {

                if (arr[i] < arr[j])
                {

                    a = arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
                }
            }
        }
        printf("The numbers arranged in descending order are given below \n");
        for (int i = 0; i < *size; ++i)
        {
            printf("%d\n", arr[i]);
        }
        break;
    default:
        break;
    }
}

int main()
{
    int n;
    int num[50];
    int r;
    printf("Enter arr of elements you want to enter: \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter Element %d: ", (i + 1));
        scanf("%d", &num[i]);
    }

    printf("Enter 1 For Ascending\nEnter 2 For Descending\n");
    scanf("%d", &r);

    SortFunction(num, &n, r);

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", num[i]);
    }

    return 0;
}
