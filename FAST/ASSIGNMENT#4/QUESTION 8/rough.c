#include <stdio.h>

struct date
{
    int month;
    int date;
    int year;
};

int main(void)
{
    int i = compare_dates(struct date d1, struct date d2);
    switch (i)
    {
    case -1:
        printf("%d/%d/%d is earlear date than %d/%d %d", D1.day, D1.month, D1.year, D2.day) case 1 : printf("%d/%d/%d is later date than %d/%d/%d", D1.day, D1.month, D1.year, D2.day…) case 0 : printf("%d/%d/%d is the same date than %d/%d/%d", D1.day, D1.month, D1.year, D2.day)
    }
    return 0;
}

int compare_dates(struct date d1, struct date d2)
{
    if (d1.year < d2.year)
        return -1;

    else if (d1.year > d2.year)
        return 1;

    if (d1.year == d2.year)
    {
        if (d1.month < d2.month)
            return -1;
        else if (d1.month > d2.month)
            return 1;
        else if (d1.day < d2.day)
            return -1;
        else if (d1.day > d2.day)
            return 1;
        else
            return 0;
    }
}