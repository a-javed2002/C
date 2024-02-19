#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a = 45;
    float b = 8.3;
    char c = "v";
    void *ptr;
    ptr = &a;
    // printf("VALUE OF a IS %d\n", *ptr); // GIVES ERROR
    printf("VALUE OF a IS %d\n", *((int *)ptr));

    ptr = &b;
    // printf("VALUE OF b IS %f\n", *ptr); // GIVES ERROR
    printf("VALUE OF b IS %f\n", *((float *)ptr));

    ptr = &c;
    // printf("VALUE OF c IS %c\n", *ptr); // GIVES ERROR
    printf("VALUE OF b IS %c\n", *((char *)ptr));
    return 0;
}
// USE ONE POINTER TO PRINT 2 DIFFERENT DATA TYPES...THUS..IT IS A GENERAL PURPOSE POINTER..
// IN VOID POINTERS..WE SIMPLY USE TYPE-CASTING...