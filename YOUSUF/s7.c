#include <stdio.h>
#include <string.h>
#include <time.h>
int main()
{
    time_t seconds = time(NULL);
    struct tm *current_time = localtime(&seconds);
    int inc_days = 45;
    int temp = inc_days;
    int inloop = 0;
    int year = current_time->tm_year + 1900;
    int month = current_time->tm_mon + 1;
    int day = current_time->tm_mday;
    char month_in_text[20];
    printf("Current Day/Month/Year : %d/%d/%d\n", day, month, year);
    while (inc_days != 0)
    {
        inloop++;
        inc_days--;
        day++;
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            if (day > 31)
            {
                month++;
                day = 1;
            }
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            if (day > 30)
            {
                month++;
                day = 1;
            }
        }
        else if (month == 2)
        {
            if (day == 28)
            {
                month++;
                day = 1;
            }
        }
        else
        {
            printf("error...!!!\n");
            break;
        }
        if (month > 12)
        {
            year++;
            month = 1;
        }
    }
    // printf("inloop %d\n", inloop);
    
    if (month == 1)
    {
        strcpy(month_in_text , "January");
    }
    else if (month == 2)
    {
        strcpy(month_in_text , "February");
    }
    else if (month == 3)
    {
        strcpy(month_in_text , "March");
    }
    else if (month == 4)
    {
        strcpy(month_in_text , "April");
    }
    else if (month == 5)
    {
        strcpy(month_in_text , "May");
    }
    else if (month == 6)
    {
        strcpy(month_in_text , "June");
    }
    else if (month == 7)
    {
        strcpy(month_in_text , "July");
    }
    else if (month == 8)
    {
        strcpy(month_in_text , "August");
    }
    else if (month == 9)
    {
        strcpy(month_in_text , "September");
    }
    else if (month == 10)
    {
        strcpy(month_in_text , "October");
    }
    else if (month == 11)
    {
        strcpy(month_in_text , "November");
    }
    else if (month == 12)
    {
        strcpy(month_in_text , "December");
    }
    printf("After %d days The Date Is ------> Day Month Year : %d %s %d\n", temp, day, month_in_text, year);
    return 0;
}