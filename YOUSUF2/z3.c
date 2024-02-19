#include <stdio.h>
int main()
{
    float arr[5];
    int count = 0;
    for (float i = 3.14; i < 3.54; i = i + 0.1)
    {
        arr[count] = i;
        count++;
    }

    for (int step = 0; step < 4; step++)
    {
        for (int i = 0; i < 4 - step; i++)
        {

            if (arr[i] < arr[i + 1])
            {
                float temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%.2f\n", arr[i]);
    }
    return 0;
}