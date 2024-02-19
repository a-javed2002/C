#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char char1, char char2)
{
    // FOR ROCK,PAPER,SCISSORS - RETURNS 1 IF char1>char2 AND 0 OTHERWISE.IF char1==char2 IT WILL RETURN -1
    if (char1 == char2)
    {
        return -1;
    }
    else if (char1 == 'r' && char2 == 's')
    {
        return 1;
    }
    else if (char2 == 'r' && char1 == 's')
    {
        return 0;
    }
    else if (char1 == 'p' && char2 == 'r')
    {
        return 1;
    }
    else if (char2 == 'p' && char1 == 'r')
    {
        return 0;
    }
    else if (char1 == 's' && char2 == 'p')
    {
        return 1;
    }
    else if (char2 == 's' && char1 == 'p')
    {
        return 0;
    }
}
int main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};
    printf("WELCOME TO THE ROCK, PAPER, SCISSORS.\n");
    for (int i = 0; i < 3; i++)
    {
        // TAKE PLAYER 1'S INPUTS
        printf("PLAYER 1'S TURN:\n");
        printf("CHOOSE 1 FOR ROCK,2 FOR PAPER,3 FOR SCISSORS\n");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf("YOU HAVE CHOOSE %c\n\n", playerChar);

        // GENERATE COMPUTER'S INPUT
        printf("COMPUTER'S TURN:\n");
        printf("CHOOSE 1 FOR ROCK,2 FOR PAPER,3 FOR SCISSORS\n");
        temp = generateRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf("CPU CHOOSE %c\n", compChar);

        // COMPARING THE SCORES
        if (greater(compChar, playerChar) == 1)
        {
            compScore += 1;
            printf("CPU GOT IT!\n\n");
        }
        else if (greater(compChar, playerChar) == -1)
        {
            compScore += 1;
            playerScore += 1;
            printf("IT'S A DRAW\n\n");
        }
        else
        {
            playerScore += 1;
            printf("YOU GOT IT!\n\n");
        }
        printf("YOU: %d\nCPU: %d\n",playerScore,compScore);
    }
    if (playerScore > compScore)
    {
        printf("YOU WIN THE GAME\n");
    }
    else if (playerScore < compScore)
    {
        printf("CPU WIN THE GAME\n");
    }
    else
    {
        printf("IT'S A DRAW\n");
    }
    return 0;
}