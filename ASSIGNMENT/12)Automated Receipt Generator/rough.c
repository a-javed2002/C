#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char str[] = "hello bro..how are you...i think you are fine";
    char oldword[] = "are";
    char newword[] = "brother";
    printf("str:%s\n", str);
    printf("oldword:%s\n", oldword);
    printf("newword:%s\n", newword);
    printf("%s\n", strstr(str, oldword));//takes us to this word..also gives address of it...
    printf("%s\n", strstr(str, oldword));//increment chaye to find same next word in string
    return 0;
}