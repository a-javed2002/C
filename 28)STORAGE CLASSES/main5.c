//use of extern
#include <stdio.h>
#include "main4.c"
int sum = 100;
int func1(int a,int b){
    // auto int sum;
    // sum=a+b;
    extern int sum;//if u remove sum..it will give garbage value
    return sum;
}
int main()
{
    int sum =func1(5,3);
    printf("THE SUM IS %d\n",sum);
    printf("THE a IS %d",a);//VALUE COMES FROM FILE--main4.c
    return 0;
}