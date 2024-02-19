/*
 * C program to accept N numbers and arrange them in an ascending order
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
    int temp, n, number[30];
    printf("Enter the value of N \n");
    scanf("%d", &n);
    printf("Enter the numbers \n");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &number[i]);
    }
    for (int j = 0; j < n; ++j)
    {
        for (int k = j + 1; k < n; ++k)
        {
            if (number[j] > number[k])
            {
                temp = number[j];
                number[j] = number[k];
                number[k] = temp;
            }
        }
    }

    printf("The numbers arranged in ascending order are given below \n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d\n", number[i]);
    }
    return 0;
}