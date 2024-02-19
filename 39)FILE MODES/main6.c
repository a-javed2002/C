#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("file3.txt", "r+");//it overwrite from begining...
    fputc('a',ptr);
    fputs("bcdefghijklmnopqrstuvwxyz",ptr);
    return 0;
}
//also use raeding commands in it for practice...fgetc and fgets