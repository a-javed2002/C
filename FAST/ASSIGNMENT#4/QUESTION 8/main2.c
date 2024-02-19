#include <time.h>
#include <stdio.h>

int main(void)
{
    time_t date1, date2;
    // initialize date1 and date2...

    double seconds = difftime(date1, date2);
    if (seconds > 0)
    {
        printf("Date1 > Date2\n");
    }

    return 0;
}
