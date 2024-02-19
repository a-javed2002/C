#include <stdio.h>

void getData();
void volumeCalu(int h, int a);

int main()
{
    getData();
}

void getData()
{
    int h, a;
    printf("Enter Height: ");
    scanf("%d", &h);
    printf("Enter Area: ");
    scanf("%d", &a);
    volumeCalu(h, a);
}

void volumeCalu(int h, int a)
{
    int calculate = (a * a) * (1 / 3 * (h));
    printf("The Volume Is %d\n",calculate);
}