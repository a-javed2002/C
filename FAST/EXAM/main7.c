#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>
int main()
{
    char *cities[] = {"Lahore", "london", "sydney"};
    int **i = &cities[0];
    printf("%c\n", **i);
    return 0;
}