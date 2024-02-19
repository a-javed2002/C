#include <stdio.h>
int func1(int a)
{
    int b = a;
    printf("THE VALUE OF a IS %d\n", a);
    b++;
}
int func2()
{
    static int b = 10;
    printf("THE VALUE OF a IS %d\n", b);
    b++;
}
int num;
int main()
{
    int a = 100;
    printf("func1 value\n");
    func1(a);
    printf("func2 value\n");
    func2();
    printf("\n AGAIN \n");
    printf("func1 value\n");//prints 100..same
    func1(a);
    printf("func2 value\n");
    func2();//prints 11...add 1
    return 0;
}
// static variables remember there previous value
//we cannot assign variable or functions...ERROR OCCURS..."static int b = a;"....."static int b = func1();"
//ERROR OCCURS BECAUSE STATIC VARIABLES MAKE SPACE IN MEMORY BEFIRE EXECUTING THE PROGRAM(MAIN FUNCTION)....