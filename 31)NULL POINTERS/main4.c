#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a = 34;
    int *ptr = &a;
    // int *ptr = NULL;
    if (ptr != NULL)
    {
        printf("THE ADDRESS OF a IS %d\n", *ptr);
    }
    else
    {
        printf("THE POINTER IS A NULL POINTER AND CANNOT BE DEREFERENCE\n");
    }
    return 0;
}
//USE LINE 8 OR 9...AT ONCE..
// ALWAYS USE THIS IF STATEMENT...TO AVOID..INCONVENIENCE..IN THE PROGRAM..