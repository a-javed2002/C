//switch expression must be an int or char
//case value must be an integer or a character
//case must come inside switch
//break is not important/must  
#include <stdio.h>

int main()
{
    int age, marks;
    printf("Enter your age\n");
    scanf("%d", &age);

    printf("Enter your marks\n");
    scanf("%d", &marks);

    switch (age)
    {
        case 3:
            printf("The age is 3\n");
            switch (marks)
            {
                case 45:
                    printf("Your marks are 45");
                    break;
            
                default:
                    printf("your marks are not 45");
            }
            break;

        case 13:
            printf("The age is 13\n");
            switch (marks)
            {
                case 45:
                    printf("Your marks are 45");
                    break;
            
                default:
                    printf("your marks are not 45");
            }
            break;

        case 23:
            printf("The age is 23\n");
            switch (marks)
            {
                case 45:
                    printf("Your marks are 45");
                    break;
            
                default:
                    printf("your marks are not 45");
            }
            break;

        default:
            printf("Age is not 3, 13 or 23\n");
        //no need for break after default
    }


    return 0;
}

