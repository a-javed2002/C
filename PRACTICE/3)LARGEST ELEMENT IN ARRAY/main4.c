//PROGRAM IS PERFECT...CHECK IN DEV
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("color 70");
    //TAKING LENGTH OF ARRAY
    int n;
    printf("FIND LARGEST AND SMALLEST NUMBERS\n");
    printf("HOW MANY NUMBERS YOU WANT TO CHECK\n",n);
    scanf("%d",&n);
    int array[n];
    system("cls");
    //TAKING INPUT
    for (int i = 0; i < n; i++)
    {
        printf("ENTER NUMBER %d\n",i+1);
        scanf("%d",&array[i]);
    }
    system("cls");
    //CHECKING
    int largest = 0, smallest = 100000;
    for (int i = 0; i < n; i++)
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
    //RESULT
    printf("NUMBERS YOU ENTERED ARE:");
    for (int i = 0; i < n; i++)
    {
        printf("%d,",array[i]);
    }
    printf("\nLARGEST NUMBER IS %d\n", largest);
    printf("SMALLEST NUMBER IS %d\n", smallest);
    return 0;
}