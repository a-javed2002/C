#include <stdio.h>
func1(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
        return (func1(n - 1));
    }
}
int main()
{
    int n;
    printf("ENTER MAXIMUM STARS IN THE PATTERN\n");
    scanf("%d", &n);
    func1(n);
    return 0;
}