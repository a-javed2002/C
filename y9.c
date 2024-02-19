#include <stdio.h>
int main()
{
    int day;
    int fine = 1000;
    printf("Enter Number Of days : ");
    scanf("%d", &day);
    if (day > 0 && day <= 7)
    {
        printf("%d Charges\n", (fine));
    }
    else if (day > 7 && day <= 14)
    {
        printf("%d Charges\n", (fine * 2));
    }
    else if (day > 14)
    {
        printf("%d Charges\n", (fine * 3));
    }
    return 0;
}