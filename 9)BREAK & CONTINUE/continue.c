#include <stdio.h>
int main(){
    printf("HELLO WORLD\n");
int i,age;
for (i = 1; i < 10; i++){
    printf("%d)ENTER YOUR AGE\n",i);
    scanf("%d",&age);
    if (age>10)
    {
        continue;
    } //below code will work if condition is false only..if true..then next iteration
    printf("HELLO\n");
    printf("BRO\n");
    printf("YOU\n");
    printf("I\n");
    printf("US\n");
}
return 0;
}