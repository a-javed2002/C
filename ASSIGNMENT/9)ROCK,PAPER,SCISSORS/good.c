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
int check(int p, int q)
{
    int p1 = 0, p2 = 0, count;
    if (p == 1 && q == 1)
    {
        printf("DRAW\n");
    }
    else if (p == 2 && q == 2)
    {
        printf("DRAW\n");
    }
    else if (p == 3 && q == 3)
    {
        printf("DRAW\n");
    }
    else if (p == 1 && q == 2)
    {
        p2 = 1;
    printf("1\n");
    }
    else if (p == 1 && q == 3)
    {
        p1 = 1;
    printf("2\n");
    }
    else if (p == 2 && q == 1)
    {
        p1 = 1;
    printf("3\n");
    }
    else if (p == 2 && q == 3)
    {
        p2 = 1;
    printf("4\n");
    }
    else if (p == 3 && q == 1)
    {
        p2 = 1;
    printf("5\n");
    }
    else if (p == 3 && q == 2)
    {
        p1 = 1;
    printf("6\n");
    }
    if (p1 == 1)
    {
        printf("PLAYER 1 WINS\n");
        count = count + 1;
        printf("the value of p1 is %d and count is %d\n",p1,count);
    }
    else if(p2 == 1)
    {
        printf("COMPUTER WINS\n");
        printf("the value of p2 is %d\n",p2);
    }
}
int main()
{
    system("color 70");
    char name[20];
    int n, t;
    int a, c = 3;
    printf("ENTER YOUR NAME\n");
    gets(name);
    for (int i = 0; i < 3; i++)
    {
        printf("\t\t\tROUND %d\n", i + 1);
        printf("CHOOSE AN OPTION..\n");
        printf("1)ROCK");
        printf("\t2)PAPER");
        printf("\t3)SCISSORS\n");
        scanf("%d", &n);
    start:
        a = generateRandomNumber(c);
        if (a == 0)
        {
            goto start;
        }
        printf("THE VALUE OF n IS %d AND THE VALUE OF t IS %d\n", n, a);
        check(n, a);
    }
    return 0;
}
