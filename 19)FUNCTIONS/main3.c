// TYPE 2
// BY PASSING ARRAY'S BASE ADDRESS TO THE FUNCTION
#include <stdio.h>
void func2(int *ptr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("THE VALUE AT INDEX %d IS %d\n", i, ptr[i]); // instaed of "ptr[i]" we can write "*(ptr + 1)"
    }
    *(ptr + 2)=1003;
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
    func2(arr);
    printf("AGAIN FUCTION IMPLEMENTATION\n");
    func2(arr);
    return 0;
}