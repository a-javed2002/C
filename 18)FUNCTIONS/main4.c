//QUICK QUIZ
#include <stdio.h>
int function(int *address1,int *address2){
    *address1 = (*address1)+(*address2);
    *address2= (*address1-*address2)-(*address2);
}
int main()
{
    int a,b;
    printf("ENTER THE VALUE OF a AND b\n");
    scanf("%d %d",a,b);
    printf("THE VALUE OF a IS %d AND THE VALUE OF b IS %d\n",a,b);
    function(&a,&b);
    printf("THE VALUE OF a IS %d AND THE VALUE OF b IS %d\n",a,b);
    return 0;
}