#include <stdio.h>
int main()
{
    int number, power;
    // int val=1;
    long long int val=1;//USE THIS...SO WE CAN HAVE ANSWER OF BIG NUMBERS.
    printf("ENTER NUMBER\n");
    scanf("%d", &number);
    printf("ENTER POWER\n");
    scanf("%d", &power);
    for (int i = 0; i < power; i++)
    {
        val=val*number;
    }
    printf("THE VALUE OF %d TO THE POWER %d IS %lld",number,power,val);
    return 0;
}