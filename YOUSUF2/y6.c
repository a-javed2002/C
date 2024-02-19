#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void SentenceCase(char *Text, int *size){
    Text[1] = toupper(Text[1]);
    for (int i = 2; i < *size; i++)
    {
        if (Text[i] == '.')
        {
            Text[i + 1] = toupper(Text[i + 1]);
            i++;
        }
    }
}

int main()
{
    int i, N;
    char *arr; // array pointer

    printf("Enter the size Of Your Sentence: ");
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

    for (i = 0; i < N + 1; ++i)
    {
        scanf("%c", &arr[i]);
    }

    printf("\nBefore Function Sentence Is: ");
    for (i = 0; i < N + 1; i++)
    {
        printf("%c", arr[i]);
    }

    // arr[1] = toupper(arr[1]);
    // for (i = 2; i < N; i++)
    // {
    //     if (arr[i] == '.')
    //     {
    //         arr[i + 1] = toupper(arr[i + 1]);
    //         i++;
    //     }
    // }

    SentenceCase(arr,&N);

    printf("\n\nAfter Function Sentence Is: ");
    for (i = 0; i < N + 1; i++)
    {
        printf("%c", arr[i]);
    }

    // free the memory
    free(arr);
    return 0;
}