#include <stdio.h>
int main()
{
    int opt;
    char x;
    int q;
    float c;
    printf("Press 1 for coffee\nPress 2 for Green tea\n");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
        printf("To deal in\nPress q for quantity\nPress c for cash\n");
        getchar();
        scanf("%c", &x);
        switch (x)
        {
        case 'q':
            printf("Enter Quantity\n");
            scanf("%d", &q);
            if (q < 50)
            {
                printf("You have to pay %.2f pkr for coffee", (float)(q * 35));
            }
            else if (q > 50 && q < 155)
            {
                printf("You have to pay %.2f pkr for coffee", (float)((q * 35) * 0.945));
            }
            else if (q > 155)
            {
                printf("You have to pay %.2f pkr for coffee", (float)((q * 35) * 0.9));
            }
            else
            {
                printf("Invalid Cups entered");
            }
            break;
        case 'c':
            printf("Enter Cash\n");
            scanf("%f", &c);
            if (c < 3000)
            {
                printf("You have to pay %.2f pkr for coffee", (float)(c / 35));
            }
            else if (c > 3000 && c < 6500)
            {
                printf("You have to pay %.2f pkr for coffee", (float)((c / 35) * 0.945));
            }
            else if (c > 6500)
            {
                printf("You have to pay %.2f pkr for coffee", (float)((c / 35) * 0.9));
            }
            else
            {
                printf("Invalid Amount entered");
            }
            break;
        default:
            printf("invalid option");
            break;
        }
        break;
    case 2:
        printf("To deal in\nPress q for quantity\nPress c for cash\n");
        getchar();
        scanf("%c", &x);
        switch (x)
        {
        case 'q':
            printf("Enter Quantity\n");
            scanf("%d", &q);
            if (q < 50)
            {
                printf("You have to pay %.2f pkr for Green Tea", (float)(q * 30));
            }
            else if (q > 50 && q < 155)
            {
                printf("You have to pay %.2f pkr for Green Tea", (float)((q * 30) * 0.945));
            }
            else if (q > 155)
            {
                printf("You have to pay %.2f pkr for Green Tea", (float)((q * 30) * 0.9));
            }
            else
            {
                printf("Invalid Cups entered");
            }
            break;
        case 'c':
            printf("Enter Cash\n");
            scanf("%f", &c);
            if (c < 3000)
            {
                printf("You have to pay %.2f pkr for Green Tea", (float)(c / 30));
            }
            else if (c > 3000 && c < 6500)
            {
                printf("You have to pay %.2f pkr for Green Tea", (float)((c / 30) * 0.945));
            }
            else if (c > 6500)
            {
                printf("You have to pay %.2f pkr for Green Tea", (float)((c / 30) * 0.9));
            }
            else
            {
                printf("Invalid Amount entered");
            }
            break;
        default:
            printf("invalid option");
            break;
        }
        break;
    default:
        printf("invalid option");
        break;
    }
    return 0;
}