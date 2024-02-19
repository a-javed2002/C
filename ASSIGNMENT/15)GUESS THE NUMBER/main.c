#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, count = 1;
    srand(time(NULL));
    number = rand() % 100 + 1; // generates a random number between 1 to 100
    printf("THE NUMBER IS %d\n", number);
    // RYN THE LOOP..UNTIL THE NUMBER IS GUESS
    do
    {
        printf("GUESS THE NUMBER BETWEEN 1 TO 100\n", number);
        scanf("%d", &guess);
        if ((guess - 1) == number || (guess - 2) == number)
        {
            printf("A LITTLE BIT LOWER NUMBER...ALMOST THERE\n");
        }
        else if ((guess + 1) == number || (guess + 2) == number)
        {
            printf("A LITTLE BIT HIGHER...ALMOST THERE\n");
        }
        else if (guess > number)
        {
            printf("LOWER NUMBER PLEASE!\n");
        }
        else if (guess < number)
        {
            printf("HIGHER NUMBER PLEASE\n");
        }
        else
        {
            printf("YOU GUESS IT IN %d ATTEMPTS\n", count);
        }
        count++;
    } while (guess != number);
    return 0;
}