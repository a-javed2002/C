#include <stdio.h>
int main()
{
    int num, gender, age, verification_num;
    printf("Enter 1 For Male\n");
    printf("Enter 2 For Female\n");
    scanf("%d", &gender);
    printf("Enter a 4-digit number\n");
    scanf("%d", &num);
    printf("Enter age\n");
    scanf("%d", &age);
    printf("Enter Verification Number\n");
    scanf("%d", &verification_num);
    int temp1, temp2 = 0;
    if (gender == 1)
    {
        temp1 = num + age + 1;
    }
    else if (gender == 2)
    {
        temp1 = num + age;
    }
    printf("temp1 is %d\n", temp1);
    temp2 += temp1 % 10;
    temp1 /= 10;
    temp2 += temp1 % 10;
    temp1 /= 10;
    temp2 += temp1 % 10;
    temp1 /= 10;
    temp2 += temp1 % 10;
    if (temp2 % 5 == verification_num)
    {
        printf("Correct\n");
    }
    else
    {
        printf("Incorrect\n");
    }
    return 0;
}