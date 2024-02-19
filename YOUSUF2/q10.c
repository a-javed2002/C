#include <stdio.h>
#include <stdlib.h>
int main()
{
    int pass_students[5], count1 = 0;
    int fail_students[5], count2 = 0;
    int temp;
    for (int i = 0; i < 10; i++)
    {
        do
        {
            printf("Marks For Student %d : ", (i + 1));
            scanf("%d", &temp);
            if (temp == -1)
            {
                printf("Exiting The Program\n");
                exit(0);
            }
        } while (temp < 0 || temp > 10);

        if (temp >= 5)
        {
            pass_students[count1] = temp;
            count1++;
        }
        else
        {
            fail_students[count2] = temp;
            count2++;
        }
    }
    printf("pass students %d\n", sizeof(pass_students) / sizeof(pass_students[0]));
    printf("fail students %d\n", sizeof(fail_students) / sizeof(fail_students[0]));
    return 0;
}