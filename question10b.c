#include <stdio.h>
int main()
{
    int x,sum=0;
    printf("ENTER A 4 DIGIT NUMBER\n");
    scanf("%d",&x);
    sum+=x%10;
    x/=10;
    x/=10;
    x/=10;
    sum+=x%10;
    printf("\nTHE SUM OF THE LAST DIGIT IS %d",sum);
    return 0;
}