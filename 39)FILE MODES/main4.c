#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("file.txt", "r");
    char str[4];
    fgets(str,5,ptr);//select 4..bcz there is a null character too...
    printf("THE STRING IS %s\n",str);
    fclose(ptr);
    return 0;
}