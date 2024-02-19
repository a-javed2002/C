#include <stdio.h>
int main()
{
    int ice, total = 0;
    float time;
    printf("Number Of Ice creams You Want\n");
    scanf("%d", &ice);
    printf("To Run Machine 8 hours press 1\n");
    printf("To Run Machine 16 hours press 2\n");
    scanf("%f", &time);
    if (time == 1)
    {
        time = 0;
        while (ice != 0)
        {
            if (ice < 0)
            {
                printf("here 3\n");
                ice = ice + 50;
                total += (ice * 60);
                printf("ice is %d\n", ice);
                time += ((float)ice / 50);
                break;
            }
            else if (ice < 50)
            {
                printf("here 2\n");
                total += (ice * 60);
                printf("total is %d\n", total);
                time += ((float)ice / 50);
                break;
            }
            else
            {
                printf("here 1\n");
                total += (50 * 60);
                printf("total is %d\n", total);
                time += 1;
                ice -= 50;
            }
        }
    }
    else if (time == 2)
    {
        time = 0;
        int flag = 1;
        while (ice != 0)
        {
            if (flag == 1)
            {
                if (ice < 0)
                {
                    printf("here 3\n");
                    ice = ice + 50;
                    total += (ice * 60);
                    printf("ice is %d\n", ice);
                    time += ((float)ice / 50) * 0.5;
                    break;
                }
                else if (ice < 50)
                {
                    printf("here 2\n");
                    total += (ice * 60);
                    printf("total is %d\n", total);
                    time += ((float)ice / 50) * 0.5;
                    break;
                }
                else
                {
                    printf("here 1\n");
                    total += (50 * 60);
                    printf("total is %d\n", total);
                    time += 0.5;
                    ice -= 50;
                }
                flag = 0;
            }
            else
            {
                if (ice < 0)
                {
                    printf("here 3\n");
                    ice = ice + 50;
                    total += (ice * 120);
                    printf("ice is %d\n", ice);
                    time += ((float)ice / 50) * 0.5;
                    break;
                }
                else if (ice < 50)
                {
                    printf("here 2\n");
                    total += (ice * 120);
                    printf("total is %d\n", total);
                    time += ((float)ice / 50) * 0.5;
                    break;
                }
                else
                {
                    printf("here 1\n");
                    total += (50 * 120);
                    printf("total is %d\n", total);
                    time += 0.5;
                    ice -= 50;
                }
                flag = 1;
            }
        }
    }
    printf("ice is %d\n", ice);
    printf("Total Amount Is %d\n", total);
    printf("Total time Is %.2f days\n", time);
    return 0;
}