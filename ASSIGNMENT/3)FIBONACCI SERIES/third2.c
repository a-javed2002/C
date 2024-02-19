//FIBONACCI SERIES BY ITERATION
#include <stdio.h>
fib_iterative(int n){
    int a = 0;
    int b = 1;
    for (int i = 0; i < n-1; i++)
    {
        b = b + a;
        a = b - a;
    }
    return a;
}
int main()
{
    int num;
    printf("ENTER A NUMBER\n");
    scanf("%d",&num);
    printf("THE FIBONACCI SERIES OF %d IS %d",num,fib_iterative(num));
}