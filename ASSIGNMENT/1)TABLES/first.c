//TABLES
#include <stdio.h>

int main()
{
    /* code */
    int a,b,c;
    printf("ENTER NUMBER\n");
    scanf("%d",&a);
    printf("YOU WANT TILL?\n");
    scanf("%d",&b);
    printf("TABLE OF %d\n",a);
    b = b + 1;
    for (int i = 1; i < b; i++)
    {
        /* code */
    c = a * i;
    // printf("%d",a);
    // printf("x");
    // printf("%d",i);
    // printf("=");
    // printf("%d\n",c);
    printf("%d x %d = %d\n",a,i,c);
    }
}
