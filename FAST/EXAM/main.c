#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>
void func1(char **ptr)
{
    char *ptr1;
    ptr1 = (ptr += sizeof(int))[-2];
    printf("%s\n", ptr1);
}
int main()
{
    char *arr[] = {"ant", "bat", "cat","dog","egg","fly"};
    func1(arr);
    return 0;
}