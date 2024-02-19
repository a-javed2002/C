#include <stdio.h>
int main(){
    int num,i,j;
    for (i = 1; i < 8; i++)
    {
        printf("%d\n",i);
        for (j = 0; j < 10; j++)
        {
            printf("ENTER THE NUMBER..PRESS 0 TO EXIT\n");
            scanf("%d",&num);
            if (num==0){
                goto end;
            }
        }
    }
    end:
    return 0;
}