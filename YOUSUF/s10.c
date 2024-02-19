#include <stdio.h>
#include <string.h>

void storeData();
void showData();

struct Register
{
    char CourseId[20], CourseName[100];
};

struct Student
{
    union
    {
        struct Register reg;
    } base;
    char StudentId[20], FirstName[100], LastName[100], CellNo[20], Email[40];
} s[5];

int main()
{
    storeData();
    showData();
    return 0;
}

void storeData()
{
    printf("\n\nStoring Information:");
    for (int i = 0; i < 5; ++i)
    {
        printf("\nFor Student %d,\n", i + 1);

        printf("Enter Student Id: ");
        scanf("%s", s[i].StudentId);
        printf("Enter First Name: ");
        scanf("%s", s[i].FirstName);
        printf("Enter Last Name: ");
        scanf("%s", s[i].LastName);
        printf("Enter Cell Number: ");
        scanf("%s", s[i].CellNo);
        printf("Enter Student Email: ");
        scanf("%s", s[i].Email);
        printf("Enter Course ID: ");
        scanf("%s", s[i].base.reg.CourseId);
        printf("Enter Course Name: ");
        scanf("%s", s[i].base.reg.CourseName);
    }
}

void showData()
{
    printf("Printing Information\n");
    printf("StudentID\tFirstName\tLastName\tCellNo\t\tEmail\tRegisterID\tCourseName\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\n", s[i].StudentId, s[i].FirstName, s[i].LastName, s[i].CellNo, s[i].Email, s[i].base.reg.CourseId, s[i].base.reg.CourseName);
    }
}