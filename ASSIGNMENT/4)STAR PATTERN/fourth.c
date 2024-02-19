#include <stdio.h>
int main()
{
    int a;
    printf("PRESS 0 TO PRINT TRIANGULAR STAR PATTERN\n");
    printf("PRESS 1 TO PRINT REVERSE TRIANGULAR STAR PATTERN\n");
    scanf("%d",&a);
    if (a==0)
    {
        printf("*\n");
        printf("**\n");
        printf("***\n");
        printf("****\n");
        printf("*****\n");
    }
    else{
        printf("*****\n");
        printf("****\n");
        printf("***\n");
        printf("**\n");
        printf("*\n");
    }
    return 0;
}