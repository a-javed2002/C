#include <stdio.h>

int main()
{
    int num1, num2;
    int count = 0;
    printf("Enter Lower Limit\n");
    scanf("%d", &num1);
    printf("Enter Upper Limit\n");
    scanf("%d", &num2);
    printf("%d and %d\n",num1,num2);
    for (int i = 0; i <= num2/2; i++)
    {
        for (int j = num1; i <= num2; j++)
        {
            if ((i*i)==j && i!=0 && i!=1)
            {
                count++;
                break;
            }
        }
    }
    printf("\nTotal perfect squares = %d.\n", count);

    return 0;
}