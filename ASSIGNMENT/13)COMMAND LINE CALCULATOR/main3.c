// You have to create a command line utility to add/subtract/divide/multiply two numbers
// First command line argument of your c program must be the operation.
// The next arguments being the two numbers. For example:
// >>Command.c add 45 4
// >>49
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[])
{
    int result, a, b;
    for (int i = 0; i < 1; i++)
    {
        if (strcmp(argv[i + 1], "add") == 0 || strcmp(argv[i + 1], "ADD") == 0)
        {
            result = atoi(argv[i + 2]) + atoi(argv[i + 3]);
            printf("%d\n", result);
        }
        else if (strcmp(argv[i + 1], "sub") == 0 || strcmp(argv[i + 1], "SUB") == 0)
        {
            result = atoi(argv[i + 2]) - atoi(argv[i + 3]);
            printf("%d\n", result);
        }
        else if (strcmp(argv[i + 1], "mul") == 0 || strcmp(argv[i + 1], "MUL") == 0)
        {
            result = atoi(argv[i + 2]) * atoi(argv[i + 3]);
            printf("%d\n", result);
        }
        else if (strcmp(argv[i + 1], "div") == 0 || strcmp(argv[i + 1], "DIV") == 0)
        {
            result = atoi(argv[i + 2]) / atoi(argv[i + 3]);
            printf("%d\n", result);
        }
        else
        {
            printf("INVALID\n");
        }
    }
    return result;
}