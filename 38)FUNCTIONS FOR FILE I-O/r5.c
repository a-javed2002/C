#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
    char text[100];
    if (fgets(text, sizeof(text), stdin) != NULL)
    {
        size_t length;
        length = strlen(text);
        if (text[length - 1] == '\n')
            text[length - 1] = '\0';
        printf("the following text \033[4m");
        printf("%s", text);
        printf("\033[24m, was underlined\n");
    }
    return 0;
}