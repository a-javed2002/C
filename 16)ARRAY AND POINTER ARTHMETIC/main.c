#include <stdio.h>
int main()
{
    //int
    int a = 34;
    int *ptra1 = &a;
    printf("int\n");
    printf("%d\n", ptra1);
    ptra1++;
    printf("%d\n", ptra1);
    printf("SIZE OF int is %lu\n", sizeof(int));//in vsc with mingw-64 int size is 4...size depends on architecture
    printf("%d\n", ptra1 + 2);//+2 means adding 8 to the pointer
    //char
    printf("char\n");
    char b = '3';
    char *ptra2 = &b;
    printf("%d\n", ptra2);
    ptra2++;
    printf("SIZE OF char is %lu\n", sizeof(char));
    printf("%d\n", ptra2 + 2);
    //float
    printf("float\n");
    float c = 34;
    float *ptra3 = &c;
    printf("%f\n", ptra3);
    ptra3++;
    printf("SIZE OF float is %lu\n", sizeof(float));
    printf("%f\n", ptra3 + 2);
    return 0;
}