#include <stdio.h>
void printStr(char string[]){
    char i;
    while (string[i]!='\0')
    {
        printf("%c",string[i]);
        i++;
    }
}
int main()
{
    char str[34];
    printf("ENTER STRING\n");
    gets(str);
    printStr(str);
    return 0;
}