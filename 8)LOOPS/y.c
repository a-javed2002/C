#include <stdio.h>

int main()
{
    float sal,tax;
    printf("ENTER SALARY\n");
    scanf("%f", &sal);
    printf("ENTER TAX RATE\n");
    scanf("%f", &tax);
    printf("SALARY IS %.2f AND TAX RATE IS %.2f AND AFTER TAX IS %.2f",sal,tax,((sal*tax)/100));
    return 0;
}