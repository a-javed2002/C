#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("file5.txt", "a+");//it write..and not clear...//if file is not there then it will create "file4.txt"..and write in it..
    fputc('a',ptr);
    fputs("bcdefghijklmnopqrstuv\n",ptr);
    return 0;
}
//also use raeding commands in it for practice...fgetc and fgets