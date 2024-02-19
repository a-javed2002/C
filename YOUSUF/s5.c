#include <stdio.h>
#include <string.h>

void storeData();

struct Company
{
    char name[20];
    int hours, salary, increment;
} emp[10];

int total_employees = 10;

int main()
{
    int opt;
    int count = 0;
    storeData();

    for (int i = 0; i < total_employees; i++)
    {
        printf("Employee Number %d\n", (i + 1));
        printf("\tname : %s\n", emp[i].name);
        printf("\tHours Of Work Per Day : %d\n", emp[i].hours);
        printf("\tSalary : %d\n", emp[i].salary);
        printf("\tIncrement : %d\n", emp[i].increment);
        printf("\tTotal : %d\n", emp[i].salary + emp[i].increment);
        printf("--------*****&&&&****--------\n");
        count++;
    }
    if (count == 0)
    {
        printf("No Engines Serial Number Are Between AA0 to FF9\n");
    }
    return 0;
}

void storeData()
{
    char temp[30];
    printf("\n\nStoring Information Of %d Employees", total_employees);
    for (int i = 0; i < total_employees; ++i)
    {
        printf("\nFor Employee %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", emp[i].name);
        printf("Enter Hours: ");
        scanf("%d", &emp[i].hours);
        printf("Enter salary: ");
        scanf("%d", &emp[i].salary);
        if (emp[i].hours == 8)
        {
            emp[i].increment = (emp[i].hours) * 50;
        }
        else if (emp[i].hours == 10)
        {
            emp[i].increment = (emp[i].hours) * 100;
        }
        else if (emp[i].hours >= 12)
        {
            emp[i].increment = (emp[i].hours) * 150;
        }
        else
        {
            emp[i].increment = 0;
        }
    }
    printf("\n\n\n");
}