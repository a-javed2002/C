// Case 1: De allocation of a memory block
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr= (int *) malloc(7* sizeof(int));//jab humnay "(int *)" lagaya..tou isko void storage say int krdia..
    ptr[0] = 34;
    ptr[1] = 36;
    ptr[2] = 64;
    ptr[3] = 5;
    for (int i = 0; i < 4; i++)
    {
        printf("ptr value is %d\n",ptr[i]);
    }
    free(ptr); // ptr is now a dangling pointer
    for (int i = 0; i < 4; i++)
    {
        printf("ptr value is %d\n",ptr[i]);
    }
    return 0;
}