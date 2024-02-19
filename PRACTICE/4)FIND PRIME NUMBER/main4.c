#include <stdio.h>
int main()
{
    int n=34;
    int isPrime=1;
    for (int i = 2; i*i < n; i++)
    {
        if (n%1==0)
        {
            isPrime=0;
        }
    }
    if (isPrime)
    {
        printf("THE NUMBER %d IS PRIME\n",n);
    }
    else 
    {
        printf("THE NUMBER %d IS NOT PRIME\n",n);
    }
    return 0;
}