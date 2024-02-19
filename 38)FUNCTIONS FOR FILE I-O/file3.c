#include <stdio.h>
#include <string.h>

void storeData();
int total_students = 1;

int main()
{
    int opt;
    FILE *ptr = NULL;
    int x = 0;
    char s[1000];
    storeData();

    while (1)
    {
        printf("\nEnter 1 to see <50\n");
        printf("Enter 2 to see <80\n");
        printf("Enter 3 to see <100\n");
        printf("Enter 4 to exit\n");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            printf("Less Then 50 Are:\n");
            ptr = fopen("s1.txt", "r");
            do
            {
                s[x] = fgetc(ptr);
                x++;
                if (s[x])
                {
                    
                }
                printf("%c", s[x]);
            } while (s[x] != EOF);
            fclose(ptr);
            x = 0;
            break;
        case 2:
            printf("Less Then 80 Are:\n");
            break;
        case 3:
            printf("Less Then 100 Are:\n");
            break;
        case 4:
            return 0;
            break;
        default:
            break;
        }
    }
    return 0;
}

void storeData()
{
    FILE *ptr = NULL;
    char id[20], name[100], sex[20];
    float quiz, mid_term, final_score, total;
    ptr = fopen("s1.txt", "a");
    printf("\n\nStoring Information:");
    for (int i = 0; i < total_students; ++i)
    {
        printf("\nFor Student %d\n", i + 1);

        printf("Enter Id: ");
        scanf("%s", id);
        printf("Enter Name: ");
        scanf("%s", name);
        printf("Enter sex: ");
        scanf("%s", sex);
        printf("Enter quiz score: ");
        scanf("%f", &quiz);
        printf("Enter mid term score: ");
        scanf("%f", &mid_term);
        printf("Enter final score: ");
        scanf("%f", &final_score);
        total = (quiz + mid_term + final_score);

        fprintf(ptr, "id: %s\nname: %s\nsex: %s\nquiz: %.2f\nmid term: %.2f\nfinal: %.2f\ntotal: %.2f\n**************************\n", id, name, sex, quiz, mid_term, final_score, total);
    }
    fclose(ptr);
}