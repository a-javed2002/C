#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
    char s[20];
    int len=0;
    char temp;
    printf("ENTER A WORD TO REVERSE IT\n");
    gets(s);
    while(s[len]!='\0'){
        len++;
    }
    printf("THE LENGTH OF THE STRING IS %d\n",len);
    for (int i = 0; i < (len-1)/2; i++)
    {
        temp=s[i];
        s[i]=s[len-1-i];
    s[len-1-i]=temp;
    }
    printf("THE STRING NOW IS %s\n",s);
    return 0;
}