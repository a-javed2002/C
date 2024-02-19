//TYPE 3
#include <stdio.h>
int main()
{
    int num,index=0;
    printf("ENTER A NUMBER\n");
    scanf("%d",&num);
    //PROPERTIES OF EXPRESSION
    for (size_t i = 0; i < num; i++)
    {
        printf("%d)HELLO WORLD..HOW ARE YOU?..AND WELCOME TO PAKISTAN\n",index);
    }
//IF THERE ARE MORE THEN ONE CONDITION THEN THE LOOP WILL CONSIDER THE LAST CONDITION ONLY..
//WHEN IT GETS FALSE THE LOOP STOPS
    return 0;
}
