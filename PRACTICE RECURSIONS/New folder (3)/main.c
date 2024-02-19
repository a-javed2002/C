#include <stdio.h>
int j = 1;
int func1(int n)
{
    if (n <= 0)//if condition matches..program ends
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < (n + 1) / 2; i++)//spacing
        {
            printf(" ");
        }
        for (int i = 0; i < j; i++)//printing stars
        {
            printf("*");
        }
        printf("\n");
        j = j + 2;//each line have 2 more stars then previous
        return (func1(n - 2));//calculating spacing in next line
    }
}
int main()
{
    int n;
    printf("ENTER MAXIMUM STARS\n");
    scanf("%d", &n);
    func1(n);
    return 0;
}