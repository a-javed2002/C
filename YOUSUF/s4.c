#include <stdio.h>
#include <string.h>

struct Date
{
    char day[20], month[20], year[20];
} date[2];

int main()
{
    for (int i = 0; i < 2; i++)
    {
        printf("For Date %d\n", (i + 1));
        printf("Enter Day : ");
        scanf("%s", date[i].day);
        printf("Enter Month : ");
        scanf("%s", date[i].month);
        printf("Enter Year : ");
        scanf("%s", date[i].year);
    }

    if ((strcmp(date[0].year, date[1].year) == 0) && (strcmp(date[0].month, date[1].month) == 0) && (strcmp(date[0].day, date[1].day) == 0))
    {
        printf("Dates Are Equal\n");
        printf("%s/%s/%s\t==\t", date[0].day, date[0].month, date[0].year);
        printf("%s/%s/%s\n", date[1].day, date[1].month, date[1].year);
    }
    else
    {
        printf("Dates Are Not Equal\n");
        printf("%s/%s/%s\t!=\t", date[0].day, date[0].month, date[0].year);
        printf("%s/%s/%s\n", date[1].day, date[1].month, date[1].year);
    }
    return 0;
}