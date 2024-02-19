#include <stdio.h>
void printArray(int arr[]){
    printf("VALUES ARE: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        printf("ENTER VALUE AT INDEX %d\n", i + 1);
        scanf("%d", &array[i]);
    }
    printArray(array);
    for (int i = 0; i < 5; i++)
    {
        array[i] = array[i] + 2;
    }
    printArray(array);
    return 0;
}