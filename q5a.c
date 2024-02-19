#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "This is a test string for my program";

    printf("The given string : %s\n", str);

    strcpy(str , strrev(str));

    printf("After reversing string : %s", str);

    return 0;
}
