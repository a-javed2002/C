// Case 2: Function returning local variable address
#include <stdio.h>
#include <stdlib.h>
int* functionDangling()
{
    int a, b, sum;
    a =34;
    b = 364;
    sum = a + b;
    return sum;
}
int main()
{
    int * dangPtr = functionDangling(); // dangPtr is now a dangling pointer..
    return 0;
}