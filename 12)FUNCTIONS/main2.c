//TYPE 4
#include <stdio.h>
int sum(int a,int b);
int main()
{
    int a,b,c;
    a = 9;
    b = 87;
    c = sum(a,b);
    printf("The Sum is %d \n",c);
    return 0;
}
int sum(int a,int b){
    return a + b;
}
//second way to declare a function 