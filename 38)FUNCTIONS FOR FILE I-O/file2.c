#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *ptr = NULL;
    char s[1000];
    int i, j, count = 0;
    char c[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    FILE *ptr3 = NULL;
    ptr3 = fopen("s1.txt", "r");
    int x = 0;

    do
    {
        s[x] = fgetc(ptr3);
        // printf("%c", s[x]);
        x++;
    } while (s[x] != EOF);
    fclose(ptr3);

    int l1 = sizeof(c) / sizeof(c[0]);
    int temp = 0;

    ptr = fopen("file2.txt", "a");
    for (i = 0; i < l1; i++)
    {
        for (j = 0; s[j]; j++)
        {
            if (tolower(s[j]) == tolower(c[i]))
            {
                count++;
            }
        }
        if (count != 0)
        {
            fprintf(ptr, "%c", c[i]);
            fprintf(ptr, "%s", " (");
            fprintf(ptr, "%d", count);
            fprintf(ptr, "%s", ")");
            fprintf(ptr, "%s", "\n");
            // printf("%c (%d)\n", c[i], count);
        }
        temp += count;
        // printf("\n%d\n", temp);
        count = 0;
    }
    fprintf(ptr, "%s", "total characters are: ");
    fprintf(ptr, "%d", temp);
    fprintf(ptr, "%s", "\n****************************\n");
    fclose(ptr);

    return 0;
}