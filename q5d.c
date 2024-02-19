#include <stdio.h>
#include <string.h>

void reverse_str(char *str, int start, int end)
{
    char temp;

    if (start >= end)
        return;

    temp = *(str + start);
    *(str + start) = *(str + end);
    *(str + end) = temp;

    reverse_str(str, ++start, --end);
}

int main()
{
    char str[100];
    printf("Enter the string or characters -> ");
    gets(str);
    reverse_str(str, 0, strlen(str) - 1);
    printf("Reversed string -> %s", str);
    return 0;
}