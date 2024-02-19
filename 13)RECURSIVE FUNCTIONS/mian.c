#include <stdio.h>
int factorial(int number)
{
    if (number == 0 || number == 1){
        return 1;
    }
    else{
        return (number * factorial(number - 1));
    }
}
int main(){
    int num;
    printf("ENTER A NUMBER\n");
    scanf("%d",&num);
    printf("THE FACTORIAL OF %d IS %d",num,factorial(num));
    return 0;
}
// SEE PIC 5 FOR MORE UNDERSTANDING