#include <stdio.h>
int main()
{
    int array[] = {6, 4, 5, 1, 3, -9};
    int largest = 0, smallest = 100000,temp=0;
    for (int i = 0; i < 6; i++)
    {
        if (array[i] > array[i + 1])
        {
            if (array[i] > largest)
            {
                largest = array[i];
            }
        }
        else if (array[i] < array[i + 1])
        {
            if (array[i] < smallest)
            {
                smallest = array[i];
            }
        }
    }
    printf("{");
    for (int i = 0; i < 6; i++)
    {
        // printf("AT INDEX %d THE VALUE IS %d\n",i,array[i]);
        printf("%d,",array[i]);
    }
    printf("}\n");
    printf("LARGEST NUMBER IS %d\n", largest);
    printf("SMALLEST NUMBER IS %d\n", smallest);
    return 0;
}