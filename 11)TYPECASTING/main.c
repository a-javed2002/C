#include <stdio.h>
int main()
{
    float a,c;
    int b;
    a = 3.33;
    b = 54/5;
    c = (float) 54/5;
    printf("The value of a is %f\n",a);//CORRECT
    printf("The value of a is %d\n", a); //GIVES ZERO..WRONG
    printf("The value of a is %d\n", (int) a);//TURN "FLOAT" INTO "INT"
    printf("The value of b is %d\n", b);//WRONG
    printf("The value of b is %d\n", (int) b);//WRONG
    printf("The value of b is %f\n", (float) b);//WRONG
    printf("The value of c is %f\n", c); //CORRECT
    return 0;
}
