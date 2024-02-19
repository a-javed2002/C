// EHAT WILL HAPPEN IF WE DO NOT INITIALIZED A POINTER...
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a = 34;
    int *ptr;
    int c = 20;
    if (ptr != NULL)
    {
        printf("THE ADDRESS OF a IS %d\n", *ptr);
    }
    else
    {
        printf("THE POINTER IS A NULL POINTER AND CANNOT BE DEREFERENCE\n");
    }
    return 0;
}
//NO IDEA...POINTER WILL POINT ANY VARIABLE...
//UN-INTIALIZED POINTER HAS NO GARANTEE...SPECIFIC ADDRESS POINT KARAY YA NULL POINT KRO..