#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("THE VALUE OF argc is %d\n",argc);
    for (int i = 0; i < argc; i++)
    {
        printf("This Argument At Index Number %d Has A Value Of %s\n",i,argv[i]);
    }
    return 0;
}
