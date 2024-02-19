#include <stdio.h>
int main()
{
    int number, power, result = 0,check=0;
    float result2 = 0;
    printf("ENTER NUMBER\n");
    scanf("%d", &number);
    printf("ENTER POWER\n");
    scanf("%d", &power);
    result = number;
    check=abs(power);
    for (int i = 0; i < (check - 1); i++)
    {
        result = result * number;
    }
    if (power > 0)
    {
        printf("POWER IS GREATER THEN ZERO\n");
        printf("ANSWER: %d\n", result);
    }
    else if (power < 0)
    {
        printf("POWER IS LESS THEN ZERO\n");
        printf("ANSWER: %d\n", (float)1/result);//NOT WORKING
    }
    return 0;
}