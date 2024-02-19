#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define PI 3.14
#define SQUARE(r) r *r // macro
int main()
{
    int r = 4;
    float var = PI;
    printf("VALUE OF PI IN var IS %f\n", var);
    printf("VALUE OF PI IN #include PI IS %f\n", PI);
    printf("THE AREA OF CIRCLE WITH RADIUS %d IS %f\n", r, PI * SQUARE(r));
    return 0;
}