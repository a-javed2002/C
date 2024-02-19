#include <stdio.h>
int main()
{
    float c, f, Calories_from_fat, per;
    printf("Enter Number Of Calories In Food\n");
    scanf("%d", &c);
    printf("Enter Number Of Fats In Food\n");
    scanf("%d", &f);
    if (c > 0)
    {
        if (f > 0)
        {
            Calories_from_fat = f * 9;
            per = (Calories_from_fat) / c;
            printf("Percentage is %.2f\n", per);
            if (per > 30)
            {
                printf("food is low in fat\n");
            }
            if (Calories_from_fat > c)
            {
                printf("either the calories or fat grams were incorrectly entered\n");
            }
        }
        else
        {
            printf("negative fat\n");
        }
    }
    else
    {
        printf("negative calories\n");
    }
    return 0;
}