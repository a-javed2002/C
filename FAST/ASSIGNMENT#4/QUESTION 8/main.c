#include <stdio.h>
int main()
{
    // int date_1,date_2;
    time_t date_1, date_2;
    printf("ENTER 2 DATES TO COMPARE THEM\n");
    printf("DATE EXAMPLE: ddmmyyyy\n");
    printf("ENTER FIRST DATE\n");
    scanf("%d",&date_1);
    printf("ENTER SECOND DATE\n");
    scanf("%d",&date_2);
    if (date_1==date_2)
    {
        printf("DATES ARE EQUAL\n");
    }
    else
    {
        printf("DATES ARE NOT EQUAL\n");
    }
    return 0;
}