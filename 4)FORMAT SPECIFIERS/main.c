/*FORMAT SPECIFIERS is a way to tell computer what type of data is in a variable 
during taking input displaying output to the user*/
#include <stdio.h>
#define PI 3.142
int main()
{
    /* code */
    int a = 8;
    float b = 7.333;
    printf("The value of a is %d and the value of b is %d\n",a,b); //use f to print b as it's type is float
    printf("The value of a is %d and the value of b is %f\n",a,b); //that's good
    printf("The value of a is %d and the value of b is %.2f\n",a,b); //to get 2 decimal value..u can write var instaed of 2
    printf("The value of a is %.2d and the value of b is %.2f\n",a,b);
    printf("The value of a is %d and the value of b is %2.2f\n",a,b);//nothing happens
    printf("The value of a is %d and the value of b is %3.2f\n",a,b);//nothing happens..same
    printf("The value of a is %d and the value of b is %4.2f\n",a,b);//nothing happens..same
    printf("The value of a is %d and the value of b is %5.2f\n",a,b);//it moves bcs there are 4 characters but we give 5
    printf("The value of a is %d and the value of b is %6.2f\n",a,b);//move more further as value increases..
    printf("The value of a is %d and the value of b is %-6.2f move things ahead if value is negative\n",a,b);
/*WE HAVE TWO METHODS TO MAKE CONSTANTS
1)USE KEYWORD "const type name value"
2)USE PRE-PROCESSOR "#define name value"
*/
    const float c = 3.142;
    printf("%f\n",c);//it will print
    // c = 3.14 //start giving error
    // printf("%f,c");//it will not print bcz c is a constant
    printf("%f\n",PI);//it will print
    // PI = 3.14 //start giving error
    // printf("%f,PI");//it will not print bcz PI is a constant

    return 0;
}
