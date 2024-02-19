#include <stdio.h>
int main()
{
    int n, sum = 0;
    int count = 0;
    int firstTime = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    do
    {
        do
        {
            sum += (n % 10);
            n /= 10;
            if (firstTime)
            {
                ++count;
            }
        } while (n != 0);
        firstTime = 0;
        n = sum;
        sum = 0;
    } while (n > 10);

    printf("Total Number of digits: %d\n", count);
    printf("Digital root of number: %d", n);
}