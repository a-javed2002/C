#include <stdio.h>
int main()
{
    int Hadi_hours=4;
    int Hadi_days=5;
    int Abdullah_hours =4;
    int Abdullah_days =5;
    int Asim_hours=4;
    int Asim_days=5;
    int Hadi_total_hours_in_one_month=Hadi_hours*Hadi_days*4;
    int Abdullah_total_hours_in_one_month=Abdullah_hours*Abdullah_days*4;
    int Asim_total_hours_in_one_month=Asim_hours*Asim_days*4;
    printf("AVG HOURS IN ONE MONTH OF HADI IS %d\n",(Hadi_total_hours_in_one_month/30));
    printf("AVG HOURS IN ONE MONTH OF ABDULLAH IS %d\n",(Abdullah_total_hours_in_one_month/30));
    printf("AVG HOURS IN ONE MONTH OF ASIM IS %d\n",(Asim_total_hours_in_one_month/30));
    return 0;
}