// Create Rock, Paper & Scissors Game
//  Player 1: rock
//  Player 2 (computer): scissors -->player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins
// Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
// Notes: You have to display name of the player during the game. Take users name as an input from the user.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int check(int p, int q, int *win, int *lose, int *draw, char c[])
{
    int p1 = 0, p2 = 0;
    if (p == 1 && q == 1)
    {
        printf("%s YOU HAVE CHOOSEN ROCK\nCOMPUTER CHOOSES ROCK TOO\n", c);
        printf("DRAW\n");
        *draw = *draw + 1;
    }
    else if (p == 2 && q == 2)
    {
        printf("%s YOU HAVE CHOOSEN PAPER\nCOMPUTER CHOOSES PAPER TOO\n", c);
        printf("DRAW\n");
        *draw = *draw + 1;
    }
    else if (p == 3 && q == 3)
    {
        printf("%s YOU HAVE CHOOSEN SCISSORS\nCOMPUTER CHOOSES SCISSORS TOO\n", c);
        printf("DRAW\n");
        *draw = *draw + 1;
    }
    else if (p == 1 && q == 2)
    {
        printf("%s YOU HAVE CHOOSEN ROCK\nCOMPUTER CHOOSES PAPER\n", c);
        p2 = 1;
    }
    else if (p == 1 && q == 3)
    {
        printf("%s YOU HAVE CHOOSEN ROCK\nCOMPUTER CHOOSES SCISSORS\n", c);
        p1 = 1;
    }
    else if (p == 2 && q == 1)
    {
        printf("%s YOU HAVE CHOOSEN PAPER\nCOMPUTER CHOOSES ROCK\n", c);
        p1 = 1;
    }
    else if (p == 2 && q == 3)
    {
        printf("%s YOU HAVE CHOOSEN PAPER\nCOMPUTER CHOOSES SCISSORS\n", c);
        p2 = 1;
    }
    else if (p == 3 && q == 1)
    {
        printf("%s YOU HAVE CHOOSEN SCISSORS\nCOMPUTER CHOOSES ROCK\n", c);
        p2 = 1;
    }
    else if (p == 3 && q == 2)
    {
        printf("%s YOU HAVE CHOOSEN SCISSORS\nCOMPUTER CHOOSES PAPER\n", c);
        p1 = 1;
    }
    if (p1 == 1)
    {
        printf("\n%s YOU WINS\n", c);
        *win = *win + 1;
    }
    else if (p2 == 1)
    {
        printf("\nCOMPUTER WINS\n");
        *lose = *lose + 1;
    }
}
void hope(int win, int lose, char c[])
{
    if (win > lose)
    {
        printf("%s YOU WIN..WELDONE\n", c);
    }
    else if (lose > win)
    {
        printf("%s YOU LOSE\nBETTER LUCK NEXT TIME\n", c);
    }
    else
    {
        printf("DRAW..I MUST SAY...YOU GUYS HAVE EQUAL LUCK\n");
    }
}
int main()
{
    system("color 70");
    char name[20], next;
    int n, t, win = 0, lose = 0, s, d;
    int a, c = 3;
    printf("\t\t\t\t\t\tWELCOME TO RPS\n");
    printf("ENTER YOUR NAME\n");
    gets(name);
    system("cls");
    while (1)
    {
        for (int i = 0; i < 3; i++)
        {
        again:
            printf("\t\t\t\t\t\t\tROUND %d\n", i + 1);
            printf("%s CHOOSE AN OPTION..\n", name);
            printf("1)ROCK");
            printf("\t\t2)PAPER");
            printf("\t\t3)SCISSORS\n");
            scanf("%d", &n);
            if (n != 1 && n != 2 && n != 3)
            {
                system("cls");
                goto again;
            }
        start:
            a = generateRandomNumber(c);
            if (a == 0)
            {
                goto start;
            }
            check(n, a, &win, &lose, &d, name);
            printf("FOR NEXT ROUND..PRESS ENTER");
            scanf("%c", &next);
            scanf("%c", &next);
            system("cls");
        }
        printf("\tSCORE\n");
        printf("\t\t%s YOU WIN %d TIMES\n", win, name);
        printf("\t\tAND LOSE %d TIMES\n", lose);
        printf("\t\tAND DRAW %d TIMES\n",d);
        hope(win, lose, name);
    option:
        printf("TO PLAY AGAIN ENTER 1 \nTO EXIT ENTER 2\n");
        scanf("%d", &s);
        if (s == 1)
        {
            printf("BEST OF LUCK\n");
        }
        else if (s == 2)
        {
            goto end;
        }
        else
        {
            printf("INVALID OPTION\n");
            goto option;
        }
    }
end:
    return 0;
}
