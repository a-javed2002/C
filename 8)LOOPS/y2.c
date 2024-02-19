#include <stdio.h>
#include <stdbool.h>

int main()
{
    float time[5], distance[5];
    int temp = 0;
    bool a;
    for (int i = 0; i < 5; i++)
    {
        a = true;
        while (a)
        {
            printf("ENTER THE VALUE OF TIME IN HOURS\n");
            scanf("%f", &time[i]);
            if (time[i] <= 1 || time[i] >= 5)
            {
                continue;
            }
            else
            {
                break;
            }
        }

        while (a)
        {
            printf("ENTER THE VALUE OF DISTACE IN MILES\n");
            scanf("%f", &distance[i]);
            if (i==0)
            {
                break;
            }
            for (int j = 0; j < (i+1); j++)
            {
                if (distance[i] == distance[j] || distance[i] <= 0)
                {
                    continue;
                }
                else
                {
                    a=false;
                }
            }
        }
    }

    // optional---for printing
    for (int i = 0; i < 5; i++)
    {
        printf("THE DISTANCE %.2f AND TIME IS %.2f\n", distance[i], time[i]);
    }

    float totalDistance, totalTime;
    for (int i = 0; i < 5; i++)
    {
        totalDistance += distance[i];
        totalTime += time[i];
    }
    printf("THE AVERAGE SPEED IS %.2f miles per hour", (totalDistance / totalTime));
    return 0;
}