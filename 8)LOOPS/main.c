/*3 TYPES OF LOOPS
1)DO WHILE LOOP
2)WHILE LOOP
3)FOR LOOP*/
#include <stdio.h> //pre processor statement don't need semi-colon(;)

int main() {
    int num,index=0;
    printf("ENTER A NUMBER\n");
    scanf("%d",&num);
    //TYPE 1
    do
    {
        printf("%d)HELLO WORLD\n",index+1);
        index = index + 1;
    } while (index < num);
    return 0;
}//ENTER -1 TO CHECK DIFFERENCE B/W DO WHILE LOOP AND WHILE LOOP
//semi-colon(;) is very important