#include <stdio.h>
#include <string.h>
struct data
{
    char ID[7];
    char name[100];
    int mid1;
    int mid2;
    int final;
    int quiz;
    int assignment;
};
float accumulateEvaluations(int a, int n, struct data students[n]);
float getGPA(float a);
int smartfind(int n, char IDsearch[n], struct data students[n], int y);
int main()
{
    float a;
    char IDsearch[100];
    int n, i, j, flag, comp, x, y = 0;
    int sum = 0;
    n = 1;
    struct data students[n];
    for (i = 0; i <= n; i++)
    {
        flag = 0;
        printf("\nEnter ID :");
        scanf("%s", students[i].ID);
        for (j = 0; j <= n; j++)
        {
            comp = strcmp(students[i].ID, students[j].ID);
            if (comp == 0)
            {
                flag++;
            }
        }
        flag = flag - 1;
        if (flag > 0)
        {
            printf("Invalid data");
        }
        else
        {
            printf("\nEnter name :");
            scanf("%s", students[i].name);
            printf("\nEnter quiz score :");
            scanf("%d", &students[i].quiz);
            printf("\nEnter assignment score :");
            scanf("%d", &students[i].assignment);
            printf("\nEnter mid1 score :");
            scanf("%d", &students[i].mid1);
            printf("\nEnter mid2 score :");
            scanf("%d", &students[i].mid2);
            printf("\nEnter final score :");
            scanf("%d", &students[i].final);
        }
    }
    char choice;
    printf("g : for printing GPA of a given student ID.\n");
    printf("a : for printing GPA of all students in a tabular form.\n");
    printf("r : for replacing the details of the student at the 7th index by your exact data.\n");
    printf("f : for finding the details of a student.\n");
    printf("s : for printing the statistics of the class.\n");
    printf("e : Exit the program\n");
    printf("Enter choice : ");
    scanf(" %c", &choice);
    switch (choice)
    {

    case 'g':
        printf("Enter ID");
        scanf("%s", IDsearch);
        for (j = 0; j <= n; j++)
        {
            comp = strcmp(students[j].ID, IDsearch);
            if (comp == 0)
            {
                a = accumulateEvaluations(j, n, students);
                x = j;
            }
        }
        printf("ID\tName\tGPA\n");
        printf("%s\t %s \t %.2f\n", students[x].ID, students[x].name, a);
        break;

    case 'a':
        printf("ID\tName\tGPA\n");
        for (j = 0; j <= n; j++)
        {
            a = accumulateEvaluations(j, n, students);
            x = j;
            printf("%s\t %s \t %.2f\n", students[x].ID, students[x].name, a);
        }
        break;

    case 'r':
        strcpy(students[7].ID, "22k-5024");
        strcpy(students[7].name, "Hadi");
        students[7].quiz = 10;
        students[7].assignment = 10;
        students[7].mid1 = 10;
        students[7].mid2 = 10;
        students[7].final = 40;
        break;

    case 'f':
        printf("1 .By name\n");
        printf("2. By ID\n");
        printf("Enter method for smartfind : ");
        scanf("%d", &y);
        switch (y)
        {
        case 1:
            printf("Enter name");
            scanf("%s", IDsearch);
            x = smartfind(n, IDsearch, students, y);
            printf("ID\tName\tquiz\tassignment\tmid1\tmid2\tfinal\n");
            printf("%s\t  %s\t   %d\t  %d\t         %d\t  %d\t  %d\n", students[x].ID, students[x].name, students[x].quiz, students[x].assignment, students[x].mid1, students[x].mid2, students[x].final);
            break;
        case 2:
            printf("Enter ID");
            scanf("%s", IDsearch);
            x = smartfind(n, IDsearch, students, y);
            printf("ID\tName\tquiz\tassignment\tmid1\tmid2\tfinal\n");
            printf("%s\t  %s\t   %d\t  %d\t         %d\t  %d\t  %d\n", students[x].ID, students[x].name, students[x].quiz, students[x].assignment, students[x].mid1, students[x].mid2, students[x].final);
            break;
        }

        break;

    case 's':
        n = n + 1;
        printf("Total student count is : %d\n", n);
        for (i = 0; i <= n; i++)
        {
            sum = sum + students[i].mid1;
        }
        sum = sum / n;
        printf("Average score mid1 : %d\n", sum);
        for (i = 0; i <= n; i++)
        {
            sum = sum + students[i].mid2;
        }
        sum = sum / n;
        printf("Average score mid2 : %d\n", sum);
        for (i = 0; i <= n; i++)
        {
            sum = sum + students[i].final;
        }
        sum = sum / n;
        printf("Average score final : %d\n", sum);
        for (i = 0; i <= n; i++)
        {
            sum = sum + students[i].final + students[i].mid2 + students[i].mid1 + students[i].quiz + students[i].assignment;
        }
        sum = sum / n;
        printf("Average total score : %d\n", sum);
        for (i = 0; i <= n; i++)
        {
            sum = students[i].final + students[i].mid2 + students[i].mid1 + students[i].quiz + students[i].assignment;
            if (sum > y)
            {
                y = sum;
                x = i;
            }
        }
        printf("%s has maximum score of : %d\n", students[x].ID, y);
        printf("Students who failed : \n");
        for (i = 0; i <= n; i++)
        {
            sum = students[i].final + students[i].mid2 + students[i].mid1 + students[i].quiz + students[i].assignment;
            if (sum < 50)
            {
                printf("%s", students[i].ID);
            }
        }

        break;

    case 'e':
        return 0;
        break;
    }
}

float accumulateEvaluations(int a, int n, struct data students[n])
{
    float b = students[a].quiz + students[a].assignment + students[a].mid1 + students[a].mid2 + students[a].final;
    b = getGPA(b);
    return b;
}
float getGPA(float a)
{
    float b = (a / 100);
    b = b * 4.0;
    return b;
}
int smartfind(int n, char IDsearch[n], struct data students[n], int y)
{
    int j, comp;
    switch (y)
    {
    case 1:
        for (j = 0; j <= n; j++)
        {
            comp = strcmp(students[j].name, IDsearch);
            if (comp == 0)
            {
                return j;
            }
        }
        break;
    case 2:
        for (j = 0; j <= n; j++)
        {
            comp = strcmp(students[j].ID, IDsearch);
            if (comp == 0)
            {
                return j;
            }
        }
        break;
    }
}
