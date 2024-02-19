#include <stdio.h>
int main()
{
    int unit;
    printf("Enter Number Of Units : ");
    scanf("%d", &unit);
    printf("\n\t\tProgram To Calculate Electricity Bill\n");
    if (unit>0 && unit <=200)
    {
        printf("Your electricity Bill = %.3f\n",(float)(unit*18));
    }
    else if (unit>201 && unit <400)
    {
        printf("Your electricity Bill = %.3f\n",(float)(unit*22));
    }
    else if (unit>401 && unit <600)
    {
        printf("Your electricity Bill = %.3f\n",(float)(unit*25));
    }
    else if (unit>601)
    {
        printf("Your electricity Bill = %.3f\n",(float)(unit*20));
    }
    return 0;
}