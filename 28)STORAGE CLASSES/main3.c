// Declaration - Telling the compiler about the variable (No space reserved)
// Definition - Declaration + space reservation
//use of auto
#include <stdio.h>
#include "main4.c"
int func1(int a,int b){
    auto int sum;
    sum=a+b;
    return sum;
}
int main()
{
    int sum =func1(5,3);
    printf("THE SUM IS %d\n",sum);
    printf("THE a IS %d",a);//VALUE COMES FROM FILE--main4.c
    return 0;
}