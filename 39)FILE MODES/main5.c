#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("file2.txt", "a");
    fputc('o',ptr);
    fputs("THIS IS ABD\n",ptr);
    fputc('o',ptr);
    return 0;
}