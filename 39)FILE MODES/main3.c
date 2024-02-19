// EOF--END OF FILE CHARACTER
// EFO IS STORED IN "<stdio.h>"
#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("file.txt", "r");
    char c = fgetc(ptr);
    printf("THE CHARACTER I READ WAS %c\n",c);
    printf("THE LINE IS: %c",c);
    for (int i = 0; i < 30; i++)
    {
        printf("%c",fgetc(ptr));
        c++;
    }
    fclose(ptr);
    return 0;
}