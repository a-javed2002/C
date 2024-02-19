// want to include "temp.c" that is in folder "ROUGH"..but nhi horaha...
// plus input output in different files...
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "main4.c" //it is called #include directive...
#include "main5.c"
int main()
{
    // form file "main4.c"
    printf("a is %d\n", a);
    printf("b is %d\n", b);
    printf("user input in c is %d\n", c);
    // form file "main5.c"
    int temp = main3(a, b);
    printf("THE SUM IS %d", temp);
    printf("THE SUM IS %d", main3(a, c));
    return 0;
}