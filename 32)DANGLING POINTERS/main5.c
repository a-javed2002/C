// Case 3: If a variable goes out of scope
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *danglingPtr3;
    {
        int a = 12;
        danglingPtr3 = &a;
    }
    // Here variable a goes out of scope which means danglingPtr3 is pointing to a location which is freed 
    // And hence danglingPtr3 is now a dangling pointer
    return 0;
}