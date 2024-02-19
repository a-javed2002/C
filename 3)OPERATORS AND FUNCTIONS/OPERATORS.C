//USE "CODE RUNNER EXTENSION" TO RUN CODE AUTOMATICALLY INSTEAD OF MANUALLY
//An Operator is a symbol used to perform operations in given programming lang
/* 5 TYPES OF OPERATORS
1)Arithmetic Operators SEE PNG
2)Relational Operators SEE PNG
3)Logical Operators SEE PNG
4)Bitwise Operators (^ exclusive OR in short it's XOR) SEE PNG
5)Assignment Operators SEE PNG
"MISCELLANEOUS Operators" SEE PNG
"OPERATOR PRECEDENCE" (if u see row then see ASSOCIATIVITY) SEE PNG
*/
//USE "TOGGLE WORD WRAP" TO STOP OVERFLOWING OF TEXT
#include <stdio.h>
int main() {
    int a,b;
    a = 34;
    b = 6;
    float c;
    c = 6;
    printf("a + b = %d\n",a+b);
    printf("a - b = %d\n",a-b);
    printf("a / b = %d\n",a/b);
    printf("a * b = %d\n",a*b);
    //FLOATING USE f instead of d
    printf("a + c = %f\n",a+c);
    printf("a - c = %f\n",a-c);
    printf("a / c = %f\n",a/c);
    printf("a * c = %f\n",a*c);
    return 0;
}