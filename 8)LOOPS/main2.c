//TYPE2
#include <stdio.h>
int main()
{
    int num,index=0;
    printf("ENTER A NUMBER\n");
    scanf("%d",&num);
    while (index < num)
    {
        printf("%d)HELLO WORLD..HOW ARE YOU?\n",index+1);
        index = index + 1;
    }
    return 0;
}
