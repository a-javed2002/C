// SYNTAX //typedef <previous_name> <nickname_name>
// use to give names to data types
#include <stdio.h>
int main()
{
    typedef int integer;
    integer a = 5;
    typedef unsigned long ul;
    ul l1, l2, l3;
    printf("THE VALUE OF a IS %d", a);
    return 0;
}