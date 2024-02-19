#include <stdio.h>
int func1(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return (num * (func1(num - 1)));
    }
}
int func2(int num)
{
    int result = 1;
    for (int i = num; i > 1; i--)
    {
        // result = result * i;
        result*=i;
    }
    return result;
}
int main()
{
    int num;
    printf("ENTER A NUMBER\n");
    scanf("%d", &num);
    printf("BY RECURSIONS FACTORIAL OF %d IS %d\n", num, func1(num));
    printf("BY ITERATIVE FACTORIAL OF %d IS %d\n", num, func2(num));
    return 0;
}