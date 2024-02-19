#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("file4.txt", "w+");//it clears and write from begining...//if file is not there then it will create "file4.txt"..and write in it..
    fputc('a',ptr);
    fputs("bcdefghijklmnopqrstuv",ptr);
    return 0;
}
// no need for reading commands as everything will be cleared