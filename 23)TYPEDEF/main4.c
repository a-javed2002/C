// USE OF TYPEDEF
#include <stdio.h>
int main()
{
    // int* a, b;//a is a pointer and b is an integer....BIG MISTAKE
    // int c;
    // a=&c;
    // b=&c;//error..because b is not a pointer
    // SOLUTION
    typedef int *intPointer;
    intPointer a, b; // a and b are pointers..
    int c = 89;
    a=&c;
    b=&c;//IT WILL RUN..NO ERROR..
    // b=c;//ERROR BECAUSE b IS A POINTER..
    return 0;
}