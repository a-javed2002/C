#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>
int main()
{
    merged("abcd", 3, " abcd");
    return 0;
}

void merged(char arr[100], int start_position, char insert[100])
{
    char *ptr1 = arr;
    char *ptr2 = insert + start_position;

    strcat(ptr1, ptr2);

    printf(arr);
    printf("\n");
    printf(insert);
}