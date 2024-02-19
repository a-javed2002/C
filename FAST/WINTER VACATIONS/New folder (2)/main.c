#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>
int main()
{
    int n;//!how to use long..?
    int d;
    int result=0;
    printf("ENTER NUMBER OF CELLS\n");
    scanf("%d",&n);
    printf("ENTER NUMBER OF DAYS\n");
    scanf("%d",&d);
    printf("n is %d and d is %d\n",n,d);//FOR TESTING
    for (int i = 0; i < d; i++)
    {
        // printf("running\n");//FOR TESTING
        result=n/2;
    }
    return 0;
}