#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int i, N;
    char *arr; // array pointer

    printf("Enter the size Of Your String: ");
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

    printf("Enter %d characters ", N);

    for (i = 0; i < N + 1; ++i)
    {
        scanf("%c", &arr[i]);
    }

    i = 0;
    int wrd = 0;
    while (arr[i] != '\0')
    {
        /* check whether the current character is white space or new line or tab character*/
        if (arr[i] == ' ' || arr[i] == '\n' || arr[i] == '\t')
        {
            wrd++;
        }

        i++;
    }

    printf("\n\nString Is: ");
    for (i = 0; i < N + 1; i++)
    {
        printf("%c", arr[i]);
    }

    printf("\n Have %d Words",i-wrd);

    // free the memory
    free(arr);
    return 0;
}