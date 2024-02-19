#include <stdio.h>
float avg(float a, float b, float c);

int main()
{
    int i;
    float a, b, c;
    float result;

    for (i = 0; i < 5; i++)
    {
        printf("\nLoop Turn: %d\n", (i + 1));
        printf("enter num 1\n");
        scanf("%f", &a);
        printf("enter num 2\n");
        scanf("%f", &b);
        printf("enter num 3\n");
        scanf("%f", &c);
        result = avg(a, b, c);
        printf("your average is : %.2f", result);
    }
    return 0;
}

float avg(float a, float b, float c)
{
    float result;
    result = (a + b + c) / 3;
    return result;
}
