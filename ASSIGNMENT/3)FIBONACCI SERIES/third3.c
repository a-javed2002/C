//COMPARISION
//ITERATIVE WINS
#include <stdio.h>
int fib_recursive(int n){
    if (n == 1 || n ==2){
        return n-1;
    }
    else{
        return(fib_recursive(n-1) + fib_recursive(n-2));
}
}
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
    printf("THE FIBONACCI SERIES OF %d IS %d\n",num,fib_iterative(num));
    printf("THE FIBONACCI SERIES OF %d IS %d\n",num,fib_recursive(num));
}