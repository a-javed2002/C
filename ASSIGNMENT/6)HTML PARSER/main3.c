#include <stdio.h>
#include <string.h>
void parser(int a, char arr[])
{
    int n;
    for (int i = 5; i <= a; i++)
    {
        if (arr[i] = '>')
        {
            n = i + 1;
            for (int j = n; j < a - i; j++)
            {
                printf("%c", arr[j]);
            }
        }
    }
}

int main()
{
    int a;
    char str[] = "<sz> THIS IS MY FIRST WEBSITE </sz>";
    a = strlen(str);
    printf("%d\n", a);
    parser(a, str);
    return 0;
}
// NOT GOOD CODE...