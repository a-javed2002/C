#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("file.txt", ptr);
    fprintf(ptr,"%d %d\n", __DATE__, __TIME__);
    fprintf(ptr,"NAME OF CUSTOMER IS %s\n");
    return 0;
}