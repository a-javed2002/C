#include <stdio.h>
int main()
{
    int opt;
    float x;
    int q;
    float c;
    printf("Press 1 for Economy\nPress 2 for business\nPress 3 for VIP\n");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
        printf("Enter Weight\n");
        scanf("%f", &x);
        if (x <= 25)
        {
            printf("Economy:Cost Of carrying luggage is 0");
        }
        else if (x > 25 && x <= 40)
        {
            printf("Economy:Cost Of carrying luggage is %.2f\n", (x * 1.5));
        }
        else if (x > 40)
        {
            printf("Economy:Cost Of carrying luggage is %.2f\n", (x * 2));
        }
        break;
    case 2:
        printf("Enter Weight\n");
        scanf("%f", &x);
        if (x <= 35)
        {
            printf("Business:Cost Of carrying luggage is 0");
        }
        else if (x > 35 && x <= 50)
        {
            printf("Business:Cost Of carrying luggage is %.2f\n", (x * 1.25));
        }
        else if (x > 50)
        {
            printf("Business:Cost Of carrying luggage is %.2f\n", (x * 1.5));
        }
        break;
    case 3:
        printf("Enter Weight\n");
        scanf("%f", &x);
        if (x <= 60)
        {
            printf("VIP:Cost Of carrying luggage is 0");
        }
        else if (x > 60)
        {
            printf("VIP:Cost Of carrying luggage is 30");
        }
        break;

    default:
        printf("invalid option");
        break;
    }
    return 0;
}