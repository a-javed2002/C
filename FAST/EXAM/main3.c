#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>
int main()
{
    char *ptr = "Void Pointer";
    void *vptr;
    vptr = &ptr;
    printf("%s", *((char *)vptr));
    return 0;
}