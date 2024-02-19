// AREA OF TRIANGLE..
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
    float a[] = {137.4, 155.2, 149.3, 160.0, 155.6, 149.7};
    float b[] = {80.9, 92.62, 97.93, 100.25, 68.95, 120.0};
    float angle[] = {0.78, 0.89, 1.3, 9.00, 1.25, 1.75};
    float area[10];
    float largestArea=0;
    for (int i = 0; i < 6; i++)
    {
        area[i] = ((0.5) * (a[i]) * (b[i]) * (sin(angle[i])));
        printf("THE AREA %d IS %.3f METER SQUARE\n", i + 1, area[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        if (area[i]>largestArea)
        {
            largestArea=area[i];
        }
    }
    printf("THE LARGEST AREA IS %.3f\n",largestArea);
    return 0;
}
// 3908.707
// 5585.057
// 7044.068
// 3305.190
// 5090.648
// 8838.162