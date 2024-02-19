#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>
int main()
{
    static char wer[3][4] = {"bag", "let", "bud"};
    putchar(*(wer[1] + 1));//currently at index 1..and +1 will give e
    return 0;
}