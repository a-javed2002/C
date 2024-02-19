#include <stdio.h>
int main()
{
    int size = 1;
    printf("ENTER SIZE\n");
    scanf("%d",size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("ENTER MARKS OF STUDENT %d: ",i);
        scanf("%d\n",arr[i]);
    }
    return 0;
}