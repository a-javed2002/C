// QUICK QUIZ
#include <stdio.h>
int avg(int a, int b)
{
    return (a + b) / 2;
}
void greetHelloAndExecute(int (*p)(int, int))
{
    printf("HELLO USER\n");
    printf("AVERAGE IS %d\n", p(4, 2));
}
void greetGmAndExecute(int (*p)(int, int))
{
    printf("GOOD MORNING USER\n");
    printf("AVERAGE IS %d\n", p(4, 2));
}
int main()
{
    int (*p)(int, int);
    p = avg;//p = avg; OR p = &avg;
    greetHelloAndExecute(p);
    greetGmAndExecute(p);
    return 0;
}