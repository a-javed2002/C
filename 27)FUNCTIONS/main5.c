// FUNCTIONS FOR DYNAMIC MEMORY ALLOCATION
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    // USE OF REALLOC(RE-ALLOCATION)
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
    for (int j = 0; j < n; j++)
    {
        printf("THE VALUE AT %d OF THIS ARRAY IS %d\n", j, ptr[j]);
    }
//REALLOC IMPLEMENTATION ON main4.c AS SHOWN ABOVE...
    printf("ENTER THE SIZE OF NEW ARRAY YOU WANT TO CREATE\n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("ENTER THE NEW VALUE NO %d OF THIS ARRAY\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        printf("THE NEW VALUE AT %d OF THIS ARRAY IS %d\n", j, ptr[j]);
    }
    return 0;
}