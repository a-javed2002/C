#include <stdio.h>
#include <string.h>

struct Employee
{
    int employee_id;
    char name[20];
    int salary;
};

struct Organisation
{
    char organisation_name[30];
    char org_number[15];
    struct Employee emp;
};

int main()
{
    struct Organisation org;

    strcpy(org.organisation_name,"NU-Fast");
    strcpy(org.org_number, "NUFAST123ABC");
    org.emp.employee_id = 127;
    strcpy(org.emp.name, "Linus Sebastian");
    org.emp.salary = 400000;

    printf("\nThe size of structure organisation : %d\n",sizeof(org));
    printf("Organisation Name : %s\n",org.organisation_name);
    printf("Organisation Number : %s\n",org.org_number);
    printf("Employee id : %d\n",org.emp.employee_id);
    printf("Employee name : %s\n",org.emp.name);
    printf("Employee Salary : %d\n",org.emp.salary);
}
