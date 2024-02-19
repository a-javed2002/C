#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>
int main()
{
    int i = 5;
    int a = ++i + ++i + ++i + ++i;
    printf("%d\n", a);
    int j = 5;
    int b = j++ + j++;
    printf("%d", b);
    return 0;
}