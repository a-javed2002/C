#include <stdio.h>
int main()
{
    int num,temp,space=0;
    printf("ENTER MAXIMUM STARS\n");
    scanf("%d",&num);
    temp=num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        space++;
        for (int k = 0; k < temp; k++)
        {
            printf("*");
        }
        temp--;
        printf("\n");
    }
    return 0;
}
/*
****
 ***
  **
   *
*/