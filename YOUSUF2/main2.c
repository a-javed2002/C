#include <stdio.h>
#include <math.h>
int main()
{
    int n, age, opt;
    printf("Enter Number Of Patients\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter Age of patient\n");
        scanf("%d", &age);
        printf("If Patient Is From Urban Area Enter 1\n");
        printf("If Patient Is From Rural Area Enter 2\n");
        scanf("%d", &opt);
        if (opt == 1 && age >= 18)
        {
            printf("Eligible for the vaccine. Kindly proceed for vaccination\n");
        }
        else if (opt == 2 && age < 18)
        {
            printf("Not Eligible for the vaccine. Kindly wait for the vaccination\n");
        }
    }

    return 0;
}