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
    // char str[] = {'A', 'B', 'D', 'U', 'L', 'L', 'A', 'H'};//GIVES ONE GARBAGE VALUE
    // char str[] = {'A', 'B', 'D', 'U', 'L', 'L', 'A', 'H','\0'};//PERFECT..WE NEED NULL CHARACTER AFTER THE WORD"'\0'"
    char str[] = "ABDULLAH";//PERFECTION...NO NEED OF "'\0'"
    // char str[9] = "ABDULLAH";//MINIMUM 9...ELSE PRINT GARBAGE VALUE TOO.."ARRAY LENGTH = SIZE OF STRING + 1"
    printStr(str);
    return 0;
}