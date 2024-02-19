#include <stdio.h>
int main()
{
    int num1,num2;
    printf("WELCOME MULTIPLICATION TABLE PROGRAM\n");
    printf("ENTER A NUMBER TO GET MULTIPLICATION TABLE\n");
    scanf("%d",&num1);
    printf("ENTER THE LENGTH OF MULTIPLICATION TABLE\n");
    scanf("%d",&num2);
    for (int i = 0; i < num2; i++)
    {
        printf("%d x %d = %d\n",num1,i+1,num1*(i+1));
    }
    return 0;
}