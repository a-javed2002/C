// PASSING ARRAYS AS FUNCTION ARGUMENTS
//TYPE 1
//BY DECLARING ARRAY AS A PARAMETER IN THE FUNCTION
#include <stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 5; i++)
    {
        array[i] = array[i] + 1000;
    }
    return 0;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printf("BEFORE FUCTION\n");
    for (int i = 0; i < 5; i++)
    {
        printf("THE VALUE AT INDEX %d IS %d\n", i, arr[i]);
    }
    printf("AFTER FUCTION IMPLEMENTATION\n");
    func1(arr);
    for (int i = 0; i < 5; i++)
    {
        printf("THE VALUE AT INDEX %d IS %d\n", i, arr[i]);
    }
    return 0;
}
//ORIGINAL ARRAY CHANGES...!!!