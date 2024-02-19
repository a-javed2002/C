#include <stdio.h>
int main()
{
    int data[] = {-2, 45, 0, 11, -9}, step, i;
    for (step = 0; step < 4; step++)
    {
        for (i = 0; i < 4 - step; i++)
        {

            // if (data[i] < data[i + 1])
            if (data[i] > data[i + 1])
            {
                int temp = data[i];
                data[i] = data[i + 1];
                data[i + 1] = temp;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", data[i]);
    }
    return 0;
}