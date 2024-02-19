#include <stdio.h>

int swapFn(int *n1, int *n2);

int main()
{
    int n1, n2;
    printf("Enter number 1: ");
    scanf("%d", &n1);
    printf("Enter number 2: ");
    scanf("%d", &n2);

    printf("\nBefore Swap n1 is %d and n2 is %d", n1, n2);
    swapFn(&n1, &n2);
    printf("\nAfter Swap n1 is %d and n2 is %d", n1, n2);
    return 0;
}

int swapFn(int *n1, int *n2)
{
    int temp = 0;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}