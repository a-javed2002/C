#include <stdio.h>
int main()
{
    // int a = 76;
    int a;
    int *pointera = &a;
    *pointera = 4;
    int *pointera2;
    int *pointera3 = NULL;
    *pointera = *pointera + 1;
    printf("THE VALUE OF a IS %d\n", a);
    printf("THE VALUE OF a IS %d\n", *pointera);
    printf("THE ADDRESS OF a IS %x\n", pointera); //%x is used to print hexadecimal values..
    printf("THE ADDRESS OF a IS %p\n", pointera); //%p is used to print the pointer value..
    printf("THE ADDRESS OF a IS %x\n", &a);
    printf("THE ADDRESS OF a IS %p\n", &a);
    printf("THE ADDRESS OF POINTER TO a IS %x\n", &pointera);
    printf("THE ADDRESS OF POINTER TO a IS %p\n", &pointera);
    printf("--------------------------NULL----------------------------\n");
    printf("THE ADDRESS OF pointera2 IS %x\n", *pointera2); // garbage value
    printf("THE ADDRESS OF pointera2 IS %x\n", pointera2);  // garbage addresses
    printf("THE ADDRESS OF pointera2 IS %p\n", pointera2);
    printf("THE ADDRESS OF pointera2 IS %x\n", &pointera2);
    printf("THE ADDRESS OF pointera2 IS %p\n", &pointera2);
    printf("THE ADDRESS OF pointera3 IS %x\n", pointera3);
    return 0;
}
// GOOGLE "printf format specifiers reference"..