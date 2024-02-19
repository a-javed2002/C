// FUNCTIONS FOR DYNAMIC MEMORY ALLOCATION
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    // USE OF CALLOC(CONTIGUOUS ALLOCATION)
    int *ptr;
    int n;
    printf("ENTER THE SIZE OF ARRAY YOU WANT TO CREATE\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("ENTER THE VALUE NO %d OF THIS ARRAY\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int j = 0; j < n; j++) // instaed of "n" ..write "n+1"...it will print extra line..but with value 0..calloc initialized all the memory with zero..//don,t print extra..just see output by commenting the input area
    {
        printf("THE VALUE AT %d OF THIS ARRAY IS %d\n", j, ptr[j]);
    }
    return 0;
}