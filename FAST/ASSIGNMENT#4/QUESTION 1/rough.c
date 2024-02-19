#include <stdio.h>
int main()
{
    char name[20];
    char subject[] = {"COMPUTER", "MATHS", "PHYSICS"};
    int students, marks[10], total;
    float average[10];
    printf("ENTER NUMBER OF STUDENTS\n");
    scanf("%d", &students);
    for (int i = 0; i < students; i++)
    {
        printf("ENTER NAME OF STUDENT\n");
        scanf("%s",&name[i]);
        for (int j = 0; j < 3; j++)
        {
            printf("ENTER MARKS OF %s\n", subject[j]);
            scanf("%d", &marks[j]);
        }
    }
    for (int k = 0; k < students; k++)
    {
        for (size_t p = 0; p < 3; p++)
        {
            average[p] = average[p] + marks[p];
            printf("IN %s : %s GOT %d MARKS OUT OF %d.PERCENTAGE IS %.2f\n", subject[p], name[p], marks[p], total, (float)((marks[p] * 100) / total));
        }
    }
    for (int q = 0; q < 3; q++)
    {
        printf("%s AVERAGE MARKS ARE: %f\n", subject[q], (float)(average[q]/students));
    }
    return 0;
}