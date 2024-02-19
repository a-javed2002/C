#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>
int odd_sum = 0;
int even_sum = 0;
int check = 0;
func1(int n, int *ptr)
{
    if (n < 0)
    {
        return 0;
    }
    else
    {
        check = n % 2;
        if (check == 0)
        {
            even_sum = even_sum + ptr[n];
            return (func1(n - 1, ptr));
            printf("in even\n");
        }
        else
        {
            odd_sum = odd_sum + ptr[n];
            return (func1(n - 1, ptr));
            printf("in odd\n");
        }
    }
}
int main()
{
    int n;
    int arr[] = {10, 20, 30, 40, 50};
    printf("ENTER TOTAL ITEMS\n");
    scanf("%d", &n);
    func1(n, arr);
    printf("odd index sum is %d\n", odd_sum);
    printf("even index sum is %d\n", even_sum);
    return 0;
}