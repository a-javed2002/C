//used to perform operations based on some conditions
/*
TYPES OF IF ELSE STATEMENTS
1)IF STATEMENT
2)IF ELSE STATEMENT
3)IF ELSE-IF LADDER
4)NESTED IF
*/
#include <stdio.h>
int main()
{
    /* code */
    float a; 
    int b;
    float c;
    char g;
    printf("ENTER YOUR MARKS\n");
    scanf("%f",&a);
    printf("ENTER TOTAL MARKS\n");
    scanf("%d",&b);
    c = (a*100)/b;
    if (c>=90)
    {
        g = "A *";
    }
    else if (c>=80)
    {
        g = "B*";
    }
    else if (c>=70)
    {
        g = "C*";
    }
    else if (c>=60)
    {
        g = "D*";
    }
    else if (c>=50)
    {
        g = "E*";
    }
    else
    {
        g = "U";
    }
    printf("YOUR MARKS %.2f\n",a);
    printf("YOUR TOTAL MARKS %d\n",b);
    printf("YOUR GRADE %c\n",g);
    printf("YOUR PERCENTAGE %.2f\n",c);
    return 0;
}
