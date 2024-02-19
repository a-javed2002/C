#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
// int generateRandomNumber(int n)
// {
//     srand(time(NULL));
//     return rand() % n;
// }
// int main()
// {
//     int a, c = 3;
//     printf("print\n");
// start:
//     a = generateRandomNumber(c);
//     printf("%d\n", a);
//     if (a == 0)
//     {
//         goto start;
//     }
//     else
//     {
//         printf("yes");
//     }
//     return 0;
// }
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int s;
    time_t t;
    while (1)
    {
        printf("1");
        option:
        printf("TO PLAY AGAIN ENTER 1 \nTO EXIT ENTER 2\n");
        scanf("%d",&s);
        if (s==1)
        {
            printf("again\n");
            printf("Date/Time:%s ", ctime(&t));
        }
        else if (s==2)
        {
            goto end;
        }
        else
        {
            printf("INVALID OPTION\n");
            goto option;
        }
    }
    end:
    return 0;
}