#include <stdio.h>
void func1(int total, int marks[], int n, char name[][30])
{
    int avg[n],i;
    for ( i = 0; i < n; i++)
    {
        avg[i] = (marks[i] * 100) / total;
    }
    for ( i = 0; i < n; i++){
        printf("\n%s got %d marks out of %d and percentage is %d%\n", name[i], marks[i], total,avg[i]);
    }
}
int main(){
    int n, total,i;
    printf("ENTER NUMBER OF STUDENTS:\n");
    scanf("%d", &n);
    char name[n][30];
    int marks[n];
    for (i = 0;i<n; i++){
        printf("ENTER NAME OF STUDENT \n");
        scanf(" %s",&name[i]);
        printf("ENTER MARKS OF %s :\n ", name[i]);
        scanf(" %d", &marks[i]);
    }
    printf("ENTER TOTAL MARKS \n");
    scanf("%d", &total);
    func1(total,marks,n,name);
}