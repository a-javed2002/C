#include <stdio.h>
#include <string.h>
void storeData(int n);
void showData();
float accumulateEvaluations(int index);
float getGPA(float t);
int smartFind(int n, char search[100]);

struct student
{
    char name[100], student_id[100];
    float mid1, mid2, assignment, final, quiz;
} s[79];

int main()
{
    int total_students = 79;
    char actualID[] = {"22k-5079"};
    char actualName[] = {"Yousuf Raza"};
    char opt;
    char searching[50];
    int totalMarks = 0, flag = 1, opt2;
    float total_mid1 = 0;
    float total_mid2 = 0;
    float total_quiz = 0;
    float total_assignment = 0;
    float total_final = 0;
    float total_score = 0;
    float max = 0;
    int index2;
    int c = 0;

    storeData(total_students);
    // showData();

    while (flag == 1)
    {
        getchar();
        printf("g -----> Find GPA\n");
        printf("a -----> Print All Students GPA\n");
        printf("r -----> Update\n");
        printf("f -----> Find Student\n");
        printf("s -----> Statistics Of Student\n");
        printf("e -----> Exit The Program\n");
        printf("Enter Option: ");
        scanf("%c", &opt);
        switch (opt)
        {
        case 'g':
            printf("Searching GPA\n");
            printf("Enter Student ID: ");
            scanf("%s", &searching);
            for (int i = 0; i < total_students; i++)
            {
                if (strcmp(s[i].student_id, searching) == 0)
                {
                    printf("\nStudent number: %d\n", i + 1);
                    printf("Student Id: ");
                    puts(s[i].student_id);
                    printf("First name: ");
                    puts(s[i].name);
                    printf("GPA is: %.2f", accumulateEvaluations(i));
                    printf("\n");
                }
            }
            break;
        case 'a':
            printf("ID\tName\tGPA\n");
            for (int j = 0; j < total_students; j++)
            {
                printf("%s\t %s \t %.2f\n", s[j].student_id, s[j].name, accumulateEvaluations(j));
            }
            break;
        case 'r':
            strcpy(s[7].student_id, "22k-1234");
            strcpy(s[7].name, "abc");
            s[7].quiz = 10;
            s[7].assignment = 10;
            s[7].mid1 = 15;
            s[7].mid2 = 15;
            s[7].final = 20;
            break;
        case 'f':
            printf("Search Here...\n");
            scanf("%s", searching);
            smartFind(total_students, searching);
            break;
        case 's':

            for (int i = 0; i < total_students; ++i)
            {
                total_mid1 += s[i].mid1;
                total_mid2 += s[i].mid2;
                total_quiz += s[i].quiz;
                total_final += s[i].final;
                total_assignment += s[i].assignment;
                total_score = s[i].mid1 + s[i].mid2 + s[i].quiz + s[i].final + s[i].assignment;
                if (total_score > max)
                {
                    max = total_score;
                    index2 = i;
                }
            }
            printf("Total Students %d\n", total_students);
            printf("Average Mid-1 Marks %.2f\n", total_mid1 / (total_students * 100));
            printf("Average Mid-2 Marks %.2f\n", total_mid2 / (total_students * 100));
            printf("Average Final Marks %.2f\n", total_final / (total_students * 100));
            printf("Average Total Scores %.2f\n", (total_mid1 + total_mid1 + total_quiz + total_final + total_assignment) / (total_students * 100));
            printf("Max Score Student ID is: %s\n", s[index2].student_id);

            printf("List Of Failed Students: \n");
            
            for (int i = 0; i < total_students; ++i)
            {
                if (accumulateEvaluations(i) < 2)
                {
                    printf("Student ID: %s\n", s[i].student_id);
                    c++;
                }
            }
            if (c == 0)
            {
                printf("No One Fails\n");
            }

            printf("\n'Thank you, my ID is %s and my name is %s'\n", actualID, actualName);
            break;
        case 'e':
            return 0;
            break;
        default:
            printf("Incorrect options");
        }
    }

    return 0;
}

void storeData(int n)
{
    int a = 1;
    printf("\n\nStoring Information:");
    for (int i = 0; i < n; ++i)
    {
        printf("\nFor Student %d,\n", i + 1);

        while (a == 1)
        {
            printf("Enter Student Id: ");
            scanf("%s", s[i].student_id);
            if (i != 0)
            {
                for (int j = 0; j <= n; j++)
                {
                    if (strcmp(s[i].student_id, s[j].student_id) == 0 && j < i)
                    {
                        printf("This ID Already Exists..!!!\n");
                        a = 1;
                        break;
                    }
                    else
                    {
                        // printf("hehehe\n");
                        a = 0;
                    }
                }
            }
            else
            {
                a = 0;
            }
        }

        printf("Enter first name: ");
        scanf("%s", s[i].name);
        printf("Enter Mid-1 Marks: ");
        scanf("%f", &s[i].mid1);
        printf("Enter Mid-2 Marks: ");
        scanf("%f", &s[i].mid2);
        printf("Enter Assignment Marks: ");
        scanf("%f", &s[i].assignment);
        printf("Enter Quiz Marks: ");
        scanf("%f", &s[i].quiz);
        printf("Enter Final Marks: ");
        scanf("%f", &s[i].final);
        a = 1;
    }
}

// void showData()
// {
//     printf("\n\nDisplaying Information:");
//     for (int i = 0; i < total_students; ++i)
//     {
//         printf("\nStudent number: %d\n", i + 1);
//         printf("Student Id: ");
//         puts(s[i].student_id);
//         printf("First name: ");
//         puts(s[i].name);
//         printf("Mid-1 Marks: %.1f", s[i].mid1);
//         printf("\nMid-2 Marks: %.1f", s[i].mid2);
//         printf("\nAssignment Marks: %.1f", s[i].assignment);
//         printf("\nQuiz Marks: %.1f", s[i].quiz);
//         printf("\nFinal Marks: %.1f", s[i].final);
//         printf("\n");
//     }
// }

float accumulateEvaluations(int index)
{
    printf("\nfunction 'accumulateEvaluations' followed by 'getGPA' is running..by program of 'Yousuf Raza(22k-5079)'\n");
    float total = s[index].quiz + s[index].assignment + s[index].mid1 + s[index].mid2 + s[index].final;
    return getGPA(total);
}

float getGPA(float t)
{
    return (t / 100) * (4);
}

int smartFind(int n, char search[100])
{
    printf("\nfunction 'smartFind' is running..by program of 'Yousuf Raza(22k-5079)'\n");
    for (int i = 0; i <= n; i++)
    {
        if (strcmp(s[i].name, search) == 0 || strcmp(s[i].student_id, search) == 0)
        {
            printf("\nStudent number: %d\n", i + 1);
            printf("Student Id: ");
            puts(s[i].student_id);
            printf("First name: ");
            puts(s[i].name);
            printf("Mid-1 Marks: %.1f", s[i].mid1);
            printf("\nMid-2 Marks: %.1f", s[i].mid2);
            printf("\nAssignment Marks: %.1f", s[i].assignment);
            printf("\nQuiz Marks: %.1f", s[i].quiz);
            printf("\nFinal Marks: %.1f", s[i].final);
            printf("\n");
            break;
        }
    }
}
