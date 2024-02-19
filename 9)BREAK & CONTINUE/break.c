#include <stdio.h>
int main(){
    printf("HELLO WORLD\n");
int i,age;
for (i = 1; i < 10; i++){
    printf("%d)ENTER YOUR AGE\n",i);
    scanf("%d",&age);
    if (age>10)
    {
        break;
    } //iteration finish once condition gets true
}
return 0;
}
//we usually use in switch case statements