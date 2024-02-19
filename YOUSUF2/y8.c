#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, N;
    char *arr;

    printf("Enter the size Of Your Name {First Name + Last Name}: ");
    scanf("%d", &N);

    // plus 1 for null character
    // malloc returns void pointer,means points to nothing
    // typecast it to int* as we want to store int values
    arr = (char *)malloc((N + 1) * sizeof(char));

    if (arr == NULL)
    {
        printf("ERROR: MEMORY ALLOCATION FAIL\n");
        return 1; // memory allocation fails - return from here
    }

    //
    printf("Enter %d characters :", N);

    for (i = 0; i < N + 1; ++i)
    {
        scanf("%c", &arr[i]);
    }

    printf("Your name Is: ");
    for (i = 0; i < N + 1; i++)
    {
        printf("%c", arr[i]);
    }

    char *temp;
    temp = arr;

    int N2;
    printf("Enter the size Of Your Student ID : ");
    // Store resize  value into variable n
    scanf("%d", &N2);
    N += (N2 + 1);
    arr = (char *)realloc(arr, N * sizeof(char));



    printf("\nEnter %d characters Of Your ID :", N2);

    for (i = 0; i < N2 + 1; ++i)
    {
        scanf("%c", &arr[i]);
    }

    int j = 0;
    for (i = N2 + 1; i < N + 1; i++)
    {
        arr[i] = temp[j];
        j++;
    }

    printf("Your name With ID Is: ");
    for (i = 0; i < N + 1; i++)
    {
        printf("%c", arr[i]);
    }

    // free the memory
    free(arr);
    return 0;
}