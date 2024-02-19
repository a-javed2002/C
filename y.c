#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>
int main()
{
    int x,count=0,sum=0;
    float res;
    printf("ENTER NUMBER\n");
    scanf("%d",&x);
    float temp=(float)(x);
    for (int i = 1; i <= x; i++)
    {
        res=temp/i;
        for (int j = 0; j <= x; j++)
        {
            if (res==j)
            {
                count++;
                printf("The Factor %d IS %d\n",count,i);
                sum+=i;
            }
        }
        if (i>=x)
        {
            printf("\nBREAKING\n");
            break;
        }
    }
    printf("\n%d\n",count);
    printf("\nTHE SUM IS %d\n",sum);
    return 0;
}