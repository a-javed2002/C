//QUICK QUIZ
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50],s2[50],s3[50];
    printf("ENTER 2 NAMES\n");
    gets(s1);
    gets(s2);
    printf("%s IS BEST FRIEND OF %s\n",s1,s2);
    strcpy(s3,strcat(s1,s2));
    printf("%s",s3);
    return 0;
}