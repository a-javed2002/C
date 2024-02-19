#include <stdio.h>
int main()
{
    float x1,x2;
    printf("ENTER NUMBER 1\n");
    scanf("%f",&x1);
    printf("ENTER NUMBER 2\n");
    scanf("%f",&x2);
    printf("NUMBER1 > NUMBER2 = %d\n",(x1>x2));
    printf("NUMBER1 < NUMBER2 = %d\n",(x1<x2));
    printf("NUMBER1 == NUMBER2 = %d\n",(x1==x2));
    printf("NUMBER1 <= NUMBER2 = %d\n",(x1<=x2));
    return 0;
}