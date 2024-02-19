#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>
float basic(int x);
struct Data
{
    float operand_1, operand_2;
    char operator;
} data[100];
int size = 100;
float result = 0;
int main()
{
    printf("Once Equation Is Completed Enter 0 (When you Are Asked For Operator)\n");

    printf("Enter operand 1\n");
    scanf("%f", &data[0].operand_1);

    for (int i = 0; i > -1; i++)
    {
        getchar();
        printf("Enter operators (+, -, *, /) %d\n", i + 1);
        scanf("%c", &data[i].operator);
        if (data[i].operator == '0')
        {
            printf("Executing Equation....!!!\n");
            break;
        }
        if (i == 0)
        {
            printf("Enter operand %d\n", i + 2);
            scanf("%f", &data[i].operand_2);
        }
        else
        {
            printf("Enter operand %d\n", i + 1);
            scanf("%f", &data[i].operand_2);
        }
        result = basic(i);
    }

    printf("%.2f\n", result);

    return 0;
}

float basic(int x)
{
    char temp = data[x].operator;
    switch (temp)
    {
    case '+':
        // printf("add\n");
        return data[x + 1].operand_1 = data[x].operand_1 + data[x].operand_2;
        break;
    case '-':
        // printf("minus\n");
        return data[x + 1].operand_1 = data[x].operand_1 - data[x].operand_2;
        break;
    case '*':
        // printf("multiply\n");
        return data[x + 1].operand_1 = data[x].operand_1 * data[x].operand_2;
        break;
    case '/':
        // printf("divide\n");
        return data[x + 1].operand_1 = data[x].operand_1 / data[x].operand_2;
        break;
    default:
        break;
    }
}
