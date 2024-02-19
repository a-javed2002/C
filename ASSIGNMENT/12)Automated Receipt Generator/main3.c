// You have to fill in values to a template letter.txt
// Letter.txt looks something like this:
// Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}.
// Please visit our outlet {{outlet}} for any kind of problems. We plan to server you again soon.
// You have to read this file and replace these values:
// {{name}}   - Harry
// {{item}}   - Table Fan
// {{outlet}} - fan outlet
// Use file functions in c to accomplish the same
#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("file.txt", "r");
    char c = fgetc(ptr);
    printf("THE LINE IS: %c",c);
    for (int i = 0; i < 160; i++)
    {
        printf("%c",fgetc(ptr));
        if (fgetc(ptr)=='{')
        {
            
        }
    }
    fclose(ptr);
    return 0;
}