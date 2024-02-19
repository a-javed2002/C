// READING A FILE
#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    char string[34], ch;
    ptr = fopen("s1.txt", "r");
    fscanf(ptr, "%s", string);
    printf("THE CONTENT OF THIS FILE HAS:\n%s", string);

    do
    {
        ch = fgetc(ptr);
        printf("%c", ch);

        // Checking if character is not EOF.
        // If it is EOF stop eading.
    } while (ch != EOF);
    return 0;
}