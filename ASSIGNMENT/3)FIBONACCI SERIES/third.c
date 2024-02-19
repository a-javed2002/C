//FIBONACCI SERIES BY RECURSIVE FUNCTION
#include <stdio.h>
int fib_recursive(int n){
    if (n == 1 || n ==2){
        return n-1;
    }
    else{
        return(fib_recursive(n-1) + fib_recursive(n-2));
}
}
int main(){
    int num;
    printf("ENTER A NUMBER\n");
    scanf("%d",&num);
    printf("THE FIBONACCI SERIES OF %d IS %d",num,fib_recursive(num));
    return 0;
}
