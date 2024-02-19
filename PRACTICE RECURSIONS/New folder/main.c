#include <stdio.h>
int i = 1;
int func1(int num1, int num2)
{
    if (num2 == 0)
    {
        return 0;
    }
    else
    {
        printf("%d x %d = %d\n", num1, i, num1 * i);
        i = i + 1;
        return (func1(num1, num2 - 1));
    }
}
int main()
{
    int num1, num2;
    printf("ENTER TABLE NUMBER\n");
    scanf("%d", &num1);
    printf("ENTER NUMBER TILL..THE TABLE YOU WANT\n");
    scanf("%d", &num2);
    func1(num1, num2);
    return 0;
}