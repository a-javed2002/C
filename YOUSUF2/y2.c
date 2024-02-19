#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
        sum+=*(ptr+i);
    }
    printf("Sum Is %d\n",sum);
    return 0;
}