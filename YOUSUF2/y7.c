#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, N;
    char *arr;

    // How many elements you want to store in array?
    printf("Enter the size Of Your Name {First Name + Last Name}: ");
    // Store size into variable n
    scanf("%d", &N);

    // plus 1 for null character
    // malloc returns void pointer,means points to nothing
    // typecast it to int* as we want to store int values
    arr = (char *)malloc((N + 1) * sizeof(char));

    // Check memory is allocated successfully
    // if fails return from the program.
    if (arr == NULL)
    {
        printf("ERROR: MEMORY ALLOCATION FAIL\n");
        return 1; // memory allocation fails - return from here
    }

    //
    printf("Enter %d characters ", N);

    // fill the array with elements by
    // reading from console screen
    for (i = 0; i < N + 1; ++i)
    {
        scanf("%c", &arr[i]);
    }

    // display the array
    printf("Your name Is:\n");
    for (i = 0; i < N + 1; i++)
    {
        printf("%c", arr[i]);
    }
    // free the memory
    free(arr);
    return 0;
}