#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a = 34;
    // int *ptr = &a;
    int *ptr = NULL;
    // printf("THE VALUE OF a IS %d\n", *ptr); //ERROR..PROGRAM STOPS..
    printf("THE ADDRESS OF a IS %d\n", ptr);
    return 0;
}
//when you use line 8..comment out line 9...and also activate line 10..as it will work then...
