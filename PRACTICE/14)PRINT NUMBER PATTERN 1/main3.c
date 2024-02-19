#include <stdio.h>
int main()
{
    int num,temp,space=0,num2=0;
    printf("ENTER MAXIMUM STARS\n");
    scanf("%d",&num);
    temp=num+1;
    for (int i = 0; i < (num+1); i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        space++;
        for (int k = 0; k < temp; k++)
        {
            printf("%d",num2);
        }
        num2++;
        temp--;
        printf("\n");
    }
    return 0;
}