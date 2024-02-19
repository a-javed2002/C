#include <stdio.h>
#include <string.h>
int main()
{
    // writing
    FILE *ptr1 = NULL;
    char string1[] = "FILE 1 CONTENT";
    ptr1 = fopen("s1.txt", "w");
    fprintf(ptr1, "%s", string1);
    fclose(ptr1);
    FILE *ptr2 = NULL;
    char string2[] = "FILE 2 CONTENT";
    ptr2 = fopen("s2.txt", "w");
    fprintf(ptr2, "%s", string2);
    fclose(ptr2);

    // reading
    FILE *ptr3 = NULL;
    char string3[100];
    ptr3 = fopen("s1.txt", "r");
    int x = 0;

    do
    {
        string3[x] = fgetc(ptr3);
        printf("%c", string3[x]);
        x++;
    } while (string3[x] != EOF);
    fclose(ptr3);

    FILE *ptr4 = NULL;
    char string4[100];
    ptr4 = fopen("s2.txt", "r");
    int y = 0;

    

    strcat(string3, string4);

    printf("\n\n%s\n", string3);

    ptr1 = fopen("s3.txt", "w");
    fprintf(ptr1, "%s", string3);
    fclose(ptr1);

    return 0;
}