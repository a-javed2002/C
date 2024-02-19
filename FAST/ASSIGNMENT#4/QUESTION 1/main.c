#include <stdio.h>
#include <stdlib.h>
int main()
{
    char name[10][20];
    char subject[][20] = {"COMPUTER", "MATHS", "PHYSICS"};
    int students, total = 100;
    float maths[10], phy[10], comp[10];
    float percentage, avg_maths, avg_comp, avg_phy;
    // INPUTS
    printf("ENTER NUMBER OF STUDENTS\n");
    scanf("%d", &students);
    system("cls");
    for (int i = 0; i < students; i++)
    {
        printf("ENTER NAME OF STUDENT %d\n", i + 1);
        scanf("%s", &name[i]);
        printf("ENTER MARKS OF MATHS\n");
        scanf("%f", &maths[i]);
        printf("ENTER MARKS OF PHYSICS\n");
        scanf("%f", &phy[i]);
        printf("ENTER MARKS OF COMPUTER\n");
        scanf("%f", &comp[i]);
    }
    // for (int i = 0; i < students; i++) // doing for testing of program
    // {
    //     printf("%s got %.1f,%.1f,%.1f in MATHS,PHYSICS,COMPUTER RESPECTIVELY\n", name[i], maths[i], phy[i], comp[i]);
    // }
    system("cls");
    // OUTPUT
    for (int k = 0; k < students; k++)
    {
        printf("%s MARKS SHEET SUMMARY\n", name[k]);
        percentage = ((maths[k]) * (100)) / (total);
        printf("%.1f IN MATHS\n", percentage);
        percentage = ((phy[k]) * (100)) / (total);
        printf("%.1f IN PHYSICS\n", percentage);
        percentage = ((comp[k]) * (100)) / (total);
        printf("%.1f IN COMPUTER\n", percentage);
        avg_maths = avg_maths + maths[k];
        avg_phy = avg_phy + phy[k];
        avg_comp = avg_comp + comp[k];
    }
    printf("\nAVERAGE MARKS IN EACH SUBJECT ARE:\n");
    printf("\t\t\t\tMATHS: %.1f\n", (avg_maths / (students)));
    printf("\t\t\t\tPHYSICS: %.1f\n", (avg_phy / (students)));
    printf("\t\t\t\tCOMPUTER: %.1f\n", (avg_comp / (students)));
    return 0;
}