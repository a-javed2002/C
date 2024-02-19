#include <stdio.h>
int main()
{
    int num1, num2, sum1=0, sum2 = 0;
    printf("Enter a Number 1: ");
    scanf("%d", &num1);
    printf("Enter a Number 2: ");
    scanf("%d", &num2);
    printf("\nFactors of %d are: ", num1);
    for (int i = 1; i <= num1; ++i)
    {
        if (num1 % i == 0)
        {
            sum1+=i;
            printf("%d ", i);
        }
    }
    printf("\nFactors of %d are: ", num2);
    for (int i = 1; i <= num2; ++i)
    {
        if (num2 % i == 0)
        {
            sum2+=i;
            printf("%d ", i);
        }
    }
    printf("\n%d and %d",sum1,sum2);
    if (sum1==sum2)
    {
        printf("\nmutually perfect");
    }
    return 0;
}