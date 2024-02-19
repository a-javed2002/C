#include <stdio.h>
int main()
{
    int n=798,a,i=0;
while (n!=0)
{
    a=n%10;
    n=n/10;
    printf("AT %d THE VALUE OF a IS %d\n",i,a);
    i++;
}
    return 0;
}