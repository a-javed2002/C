#include <stdio.h>
int main()
{
    int marks[4];
    for (int i = 0; i < 4; i++)
    {
        printf("ENTER THE VALUE OF %d ELEMENT OF ARRAY\n",i);
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("THE VALUE OF %d ELEMENT OF ARRAY IS %d\n",i,marks[i]);
    }
    return 0;
}
