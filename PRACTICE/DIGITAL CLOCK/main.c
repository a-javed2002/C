#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>
int main()
{
    int h = 0, m = 0, s = 0, i;
    system("cls");
    printf("Please enter a time formate in HH:MM:SS\n");
    scanf("%d%d%d", &h, &m, &s);
start:
    for (h; h < 24; h++)
    {
        for (m; m < 60; m++)
        {
            for (s; s < 60; s++)
            {
                system("cls");
                printf("%d:%d:%d ", h, m, s);
                if (h < 12)
                    printf("AM");
                else
                    printf("PM");
                for (int i = 0; i < 999999999; i++)
                {
                }
            }
            s = 0;
        }
        m = 0;
    }
    h = 0;
    goto start;
    getch();
}