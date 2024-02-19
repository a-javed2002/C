// APPENDING A FILE
#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    char string[64] = "\nTHIS CONTENT IS PRODUCED BY ME";
    ptr = fopen("file.txt", "a");
    fprintf(ptr, "%s", string);
    return 0;
}