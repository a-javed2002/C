#include <stdio.h>
int main()
{
    int num,sum;
    printf("WELCOME SUM OF FIRST n NUMBERS PROGRAM\n");
    printf("ENTER A NUMBER\n");
    scanf("%d",&num);
    sum = ((num)*(num+1))/(2);
    printf("SUM OF FIRST %d NUMBERS IS %d\n",num,sum);
    return 0;
}