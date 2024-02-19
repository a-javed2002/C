#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int isPalindrome(char num[20])
{
    char same[20];
    strcpy(same, num);
    num = strrev(num);
    printf("same %s num %s\n", same, num);
    if (strcmp(same, num) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char number[20];
    printf("ENTER A NUMBER TO CHECK WEATHER IT IS A PALINDROME OR NOT\n");
    scanf("%s", &number);
    if (isPalindrome(number))
    {
        printf("THIS NUMBER IS A PALINDROME \n");
    }
    else
    {
        printf("THIS NUMBER IS NOT A PALINDROME \n");
    }
    return 0;
}