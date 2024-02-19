#include <stdio.h>
int main()
{
    int num = 0, count = 0;
    float result = 0;
    printf("FIND PRIME NUMBERS\n");
    printf("ENTER A NUMBER TO CHECK WEATHER IT IS PRIME OR NOT\n");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        result = (float)num / (i + 1);
        for (int i = 0; i < num; i++)
        {
            if (result == (i + 1))
            {
                count++;
            }
        }
    }
    if (count > 2)
    {
        printf("%d IS A COMPOSITE NUMBER AS IT HAS %d FACTORS\n",num,count);
    }
    else
    {
        printf("%d IS A PRIME NUMBER\n",num);
    }
    return 0;
}