#include <stdio.h>
int j = 1;
int func1(int n) // a to store max stars
{
    if (n <= 0) // if condition matches..program ends
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < (n + 1) / 2; i++) // spacing
        {
            printf(" ");
        }
        for (int i = 0; i < j; i++) // printing stars
        {
            printf("*");
        }
        printf("\n");
        j = j + 2;             // each line have 2 more stars then previous
        return (func1(n - 2)); // calculating spacing in next line
    }
}
int k = 1;
int func2(int n) // a to store max stars
{
    if (n <= 0) // if condition matches..program ends
    {
        return 0;
    }
    else
    {
        k++;
        for (int i = 0; i < n - (n - k); i++) // spacing
        {
            printf(" ");
        }
        for (int i = 0; i < n; i++) // printing stars
        {
            printf("*");
        }
        printf("\n");
        return (func2(n - 2));
    }
}
int main()
{
    int n;
    printf("ENTER MAXIMUM STARS IN ODD NUMBERS\n");
    scanf("%d", &n);
    func1(n);
    func2(n - 2);
    return 0;
}