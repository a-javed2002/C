#include <stdio.h>
void func1(int total, int *marks[], int n, char *name[])
{
    int avg[n];
    for (int i = 0; i < n; i++)
    {
        avg[i] = (*marks[i] * 100) / total;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s got %d marks out of %d", name[i], marks[i], total, avg[i]);
    }
}
int main()
{
    int n, total;
    printf("ENTER NUMBER OF STUDENTS\n");
    scanf("%d", &n);
    char name[n];
    int marks[n];
    for (int i = 0; i < n; i++)
    {
        printf("ENTER NAME OF STUDENT ");
        scanf("%s", name[i]);
        printf("ENTER MARKS OF %s : ", name[i]);
        scanf("%d", &marks[i]);
    }
    printf("ENTER TOTAL MARKS ");
    scanf("%d", &total);
    func1(total, marks, n, name);
    return 0;
}