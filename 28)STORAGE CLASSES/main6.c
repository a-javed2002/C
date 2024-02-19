#include <stdio.h>
#include "main4.c"
int func1(int a, int b)
{
    // auto int sum;
    static int sum;
    printf("The sum is %d\n", sum);
    sum ++;
    return sum;
}

int main()
{
    int a;
    int sum = func1(3, 5);
    sum = func1(3, 5);
    sum = func1(3, 5);
    sum = func1(3, 5);
    sum = func1(3, 5);
    sum = func1(3, 5);
    return 0;
}
