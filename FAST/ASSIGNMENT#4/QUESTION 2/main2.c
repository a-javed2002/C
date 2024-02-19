#include <stdio.h>
int func1(int num)
{
    int solution = 0;
    if (num == 1)
    {
        return 1;
    }
    else if (num == 0)
    {
        return 0;
    }
    else
    {
        solution = solution + (num % 10);
        return (solution + (func1(num / 10)));
    }
}
int main()
{
    int num;
    printf("ENTER A NUMBER..TO GETS DIGITS SUM\n");
    scanf("%d", &num);
    printf("THE SUM OF DIGITS ARE %d\n", func1(num));
    return 0;
}