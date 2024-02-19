#include <stdio.h>
struct s
{
    char name[50];
    int record, quantity;
    float cost;
};
int main()
{
    struct s a[5], b[5];
    FILE *fptr;
    int i;
    fptr = fopen("s1.txt", "ab");
    for (i = 0; i < 1; ++i)
    {
        fflush(stdin);
        printf("Enter name: ");
        gets(a[i].name);
        printf("Enter quantity: ");
        scanf("%d", &a[i].quantity);
        printf("Enter cost: ");
        scanf("%f", &a[i].cost);
    }
    fwrite(a, sizeof(a), 1, fptr);
    fclose(fptr);
    fptr = fopen("s1.txt", "rb");
    fread(b, sizeof(b), 1, fptr);
    for (i = 0; i < 1; ++i)
    {
        printf("\nName: %s\nquantity: %d\ncost: %.2f", b[i].name, b[i].quantity, b[i].cost);
    }
    fclose(fptr);
}