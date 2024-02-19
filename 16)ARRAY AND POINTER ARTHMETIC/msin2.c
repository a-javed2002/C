#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 67};
    printf("VALUE OF POSITION 3 OF ARRAY IS %d\n", arr[3]);
    printf("THE ADDRESS OF FIRST ELEMENT OF THE ARRAY IS %d\n", &arr[0]);//FIRST WAY
    printf("THE ADDRESS OF FIRST ELEMENT OF THE ARRAY IS %d\n", arr);//SECOND WAY
    printf("THE ADDRESS OF SECOND ELEMENT OF THE ARRAY IS %d\n", &arr[1]);//FIRST WAY
    printf("THE ADDRESS OF SECOND ELEMENT OF THE ARRAY IS %d\n", arr + 1);//SECOND WAY
    printf("THE ADDRESS OF THIRD ELEMENT OF THE ARRAY IS %d\n", &arr[2]);//FIRST WAY
    printf("THE ADDRESS OF THIRD ELEMENT OF THE ARRAY IS %d\n", arr + 2);//SECOND WAY
    printf("THE VALUE AT ADDRESS OF FIRST ELEMENT OF THE ARRAY IS %d\n", *(&arr[0]));//FIRST WAY
    printf("THE VALUE AT ADDRESS OF FIRST ELEMENT OF THE ARRAY IS %d\n", arr[0]);//SECOND WAY
    printf("THE VALUE AT ADDRESS OF FIRST ELEMENT OF THE ARRAY IS %d\n", *(arr));//THIRD WAY
    printf("THE VALUE AT ADDRESS OF SECOND ELEMENT OF THE ARRAY IS %d\n", *(&arr[1]));//FIRST WAY
    printf("THE VALUE AT ADDRESS OF SECOND ELEMENT OF THE ARRAY IS %d\n", *(arr + 1));//SECOND WAY
    return 0;
}
// arr++; or arr--; error..it's a constant...we cannot make changes in address of array
//but we can do this "int* arrayptr = arr;"....arrayptr++;.....arrayptr--;...valid