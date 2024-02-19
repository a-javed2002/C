#include <stdio.h>
void changeValue(int *address)
{
    *address = 452;
}
int main()
{
    int a = 34;
    printf("THE VALUE OF a IS %d\n", a);
    changeValue(&a);
    printf("THE VALUE OF a IS %d\n", a);
    return 0;
}