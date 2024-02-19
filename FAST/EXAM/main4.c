#include <stdio.h>
#include <string.h>
int main()
{
    char name[30];
    int n;
    char *ptr;
    printf("ENTER YOUR FULL NAME\n");
    gets(name);
    printf("ENTER YOUR FULL NAME LENGTH\n");
    scanf("%d", &n);
    ptr = (char *)calloc(n, sizeof(char) + 1); //+1 for null character...
    strcpy(ptr, name);
    puts(ptr);
    return 0;
}