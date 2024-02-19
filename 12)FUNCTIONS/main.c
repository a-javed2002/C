//ARGUMENTS OR PARAMETERS AND RETURN VALUE
//TYPE 4
#include <stdio.h>
int sum(int a,int b){
    return a + b;
}
int main()
{
    int a,b,c;
    a = 9;
    b = 8;
    c = sum(a,b);
    printf("The Sum is %d \n",c);
    return 0;
}
//first way to declare a function 