#include <stdio.h>
void func1(int num)
{
    int count = 0;
    float result = 0;
    for (int i = 0; i < num; i++)
    {
        result = (float)num / (i + 1);
        for (int i = 0; i < num; i++)
        {
            if (result == (i + 1))
            {
                count++;
            }
        }
    }
    if (count > 2)
    {
        printf("%d IS A COMPOSITE NUMBER AS IT HAS %d FACTORS\n", num, count);
    }
    else
    {
        printf("%d IS A PRIME NUMBER\n", num);
    }
}
int main()
{
    int num1 = 0, num2 = 0;
    printf("FIND PRIME NUMBERS IN A RANGE\n");
    printf("ENTER FIRST NUMBER\n");
    scanf("%d", &num1);
    printf("ENTER SECOND NUMBER\n");
    scanf("%d", &num2);
    for (int i = num1; i <= num2; i++)
    {
        func1(i);
    }
    return 0;
}