#include <stdio.h>

void swaped(int *aPtr, int *bPtr, int *cPtr);

int main()
{
    int a, b, c;
    printf("Enter Value For 'a': ");
    scanf("%d", &a);
    printf("Enter Value For 'b': ");
    scanf("%d", &b);
    printf("Enter Value For 'c': ");
    scanf("%d", &c);
    printf("Before Swap ==> Value Of a Is %d,b Is %d & c Is %d\n", a, b, c);
    swaped(&a, &b, &c);
    printf("After Swap ==> Value Of a Is %d,b Is %d & c Is %d\n", a, b, c);
    return 0;
}

void swaped(int *aPtr, int *bPtr, int *cPtr)
{
    int temp = *aPtr;
    *aPtr = *bPtr;
    *bPtr = *cPtr;
    *cPtr = temp;
}