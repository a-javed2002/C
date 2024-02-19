#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// this is a string
char *replaceWord(const char *str, const char *oldWord, const char *newWord)
{
    char *resultString;
    int i, count = 0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);

    // Lets count the number of times old word occurs in the string
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;
            // Jump over this word
            i = i + oldWordLength - 1;
        }
    }

    // Making a new string to fit in the replaced words
    resultString = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1);//i pooray string ki length hay..add 1 for null character storage....count * (newWordLength - oldWordLength)...new word storage..

    i = 0;
    while (*str)
    {
        // Compare the substring with result
        if (strstr(str, oldWord) == str)
        {
            strcpy(&resultString[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        }
        else
        {
            resultString[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resultString[i] = '\0';
    return resultString;
}

int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    ptr = fopen("bill.txt", "r");
    ptr2 = fopen("genBill.txt", "w");
    char str[200];
    fgets(str, 200, ptr);
    printf("The given bill template was: %s\n", str);
    // Call the replaceWord function and generate newStr
    char *newStr;
    newStr = replaceWord(str, "{{item}}", "'WALL FAN'");
    newStr = replaceWord(newStr, "{{outlet}}", "'FAN'");
    newStr = replaceWord(newStr, "{{name}}", "'JOHN'");
    printf("The actual bill generated is: %s\n", newStr);
    printf("The generated bill has been written to the file genBill.txt\n");

    fprintf(ptr2, "%s", newStr);
    fclose(ptr);
    fclose(ptr2);
    return 0;
}
// alt + z...word wrap on the current document only..
/*
C String strstr()
The strstr() function returns pointer to the first occurrence of the matched string in the given string. It is used to return substring from first match till the last character. Syntax: char *strstr(const char *string, const char *match)
*/