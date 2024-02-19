#include <stdio.h>
int main()
{
    int weeks=17;
    int hours=(weeks*1)*60;
    int minutes=hours*60;
    int seconds=minutes*60;
    printf("YOU HAVE SPENT %d HOURS OR %d MINUTES OR %d SECONDS IN THIS SEMESTER IN LAB CL1002 ON MONDAYS",hours,minutes,seconds);
    return 0;
}