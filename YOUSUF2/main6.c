#include <stdio.h>
int main()
{
    char opt;
    int length = 5;
    while (1)
    {
        printf("Enter s for communicating with SD\n");
        printf("Enter m for communicating with mobile\n");
        scanf("%c", &opt);
        switch (opt)
        {
        case 's':
            for (int i = 0; i < length; i++)
            {
                printf("**Mobile is in the city zone\n");
                printf("Mobile is in the city zone\n");
                printf("Mobile is in the city zone\n");
                printf("Mobile is in the city zone\n");
                printf("Mobile is in the city zone\n");
                printf("Mobile is in the city zone\n");
                printf("**\n");
            }
            break;
        case 'm':
            for (int i = 0; i < length; i++)
            {
                printf("***Move Straight\n");
                printf("Move Straight\n");
                printf("Move Straight\n");
                printf("Move Straight\n");
                printf("Move Straight\n");
                printf("Move Straight\n");
                printf("***\n");
            }
            break;
        default:
        printf("Invalid Input\n");
            break;
        }
        getchar();
        printf("\n");
    }
    return 0;
}