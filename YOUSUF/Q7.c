#include <stdio.h>
int main()
{
    int x, q, price = 0;
    char opt;
    printf("Please Select From The Following\n");
    printf("B = Burger (Rs. 200)\n");
    printf("F = French Fries (Rs. 50)\n");
    printf("P = Pizza  (Rs. 500)\n");
    printf("S = Sandwiches (Rs. 150)\n");
    printf("How Many Types Of Snacks You Need To Order : ");
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        getchar();
        printf("Enter Snack %d\n", (i + 1));
        scanf("%c", &opt);
        printf("Enter Quantity : ");
        scanf("%d", &q);
        switch (opt)
        {
        case 'b':
            price = price + (200 * q);
        case 'f':
            price = price + (50 * q);
        case 'p':
            price = price + (500 * q);
        case 's':
            price = price + (150 * q);
        default:
            printf("Invalid Option\n");
            break;
        }
    }
    printf("\nTotal Bill Is %d\n", price);
    return 0;
}