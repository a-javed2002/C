#include <stdio.h>
#include <math.h>
int main()
{
    int n, lsd;
    float x1, y1, x2, y2, distanceTotal = 0, temp = 0;
    printf("Enter Number Of Destinations\n");
    scanf("%d", &lsd);
    if (n > 0 && n < 4)
    {
        n = (pow(2, lsd) * 2);
        printf("n is %d\n",n);
    }
    else
    {
        lsd = 0;
        n = (pow(2, lsd) * 4) + 3;
        printf("n is %d\n",n);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter Points For Destination %d\n", (i + 1));
        printf("Enter Point x : ");
        scanf("%f", &x2);
        printf("\nEnter Point y : ");
        scanf("%f", &y2);
        temp = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
        if (temp < 0)
        {
            temp = temp * (-1);
        }
        distanceTotal += sqrt(temp);

        x1 = x2;
        y1 = y2;
    }

    printf("\nTotal Distance Is %.2f\n",distanceTotal);

    return 0;
}