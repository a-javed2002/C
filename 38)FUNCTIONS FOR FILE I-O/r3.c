#include <stdio.h>

int main(void)
{
    // declare variables
    int a=10;
    int *ptr=&a;

    printf("Address of a: %d\n", &a);
    printf("Address of a: %d\n", ptr);

    printf("Another Way To Print Address In an other Format\n");
    printf("Address of a: %p\n", &a);
    printf("Address of a: %p\n", ptr);

    printf("Value of a before increment: %d\n",*ptr);
    (*ptr)++;
    printf("Value of a after increment: %d\n",*ptr);

    return 0;
}