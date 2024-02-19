#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>
#include <windows.h>
void gotoxy(int x, int y);
int generateRandomNumber(int n);
int func1(int *n);
void result(int score1, int score2, char name1[20], char name2[20]);

int main()
{
    int n, score1 = 0, score2 = 0, temp = 0, a;
    char name1[20], name2[20], str;
    gotoxy(45, 11);
    printf("WELCOME TO GOLD CHEST GAME\n");
    gotoxy(45, 12);
    printf("PRESS ENTER TO CONTINUE...\n");
    gotoxy(70, 12);
    scanf("%c", &str);
    system("cls");
    printf("ENTER NAME OF PLAYER ONE\n");
    gets(name1);
    printf("ENTER NAME OF PLAYER TWO\n");
    gets(name2);

    n = (generateRandomNumber(90) + 11);
    printf("n is %d\n", n); // FOR TESTING

    a = (generateRandomNumber(10) + 1);
    printf("a is %d\n", a); // FOR TESTING

    printf("PRESS ENTER TO CONTINUE...\n");
    scanf("%c", &str);
    system("cls");

    while (n != 1)
    {
        gotoxy(100, 0);
        printf("%s your score is %d\n", name1, score1);
        gotoxy(100, 1);
        printf("%s your score is %d\n", name2, score2);
        gotoxy(0, 0);
        if ((a % 2) == 0)
        {
            printf("%s IT'S YOUR TURN\n", name1);
            temp = func1(&n);
            score1 = score1 + temp;
            printf("%s your score is %d\n", name1, score1);
            printf("PRESS ENTER TO CONTINUE...\n");
            scanf("%c", &str);
            getchar();
            system("cls");
        }
        else
        {
            printf("%s IT'S YOUR TURN\n", name2);
            temp = func1(&n);
            score2 = score2 + temp;
            printf("%s your score is %d\n", name2, score2);
            printf("PRESS ENTER TO CONTINUE...\n");
            scanf("%c", &str);
            getchar();
            system("cls");
        }
        a++;
    }
    printf("%s your final score is %d\n", name1, score1);
    printf("%s your final score is %d\n", name2, score2);
    result(score1, score2, name1, name2);
    // printf("n in end %d\n", n); // FOR TESTING
    return 0;
}

void gotoxy(int x, int y)
{

    COORD coord;

    coord.X = x;

    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int func1(int *n)
{
    int answer1, answer2, score = 0;
    printf("1.TAKE NUMBER OF GOLD COINS YOU WANT FROM THE GOLD CHEST\n");
    printf("2.TAKE HALF OF GOLD THE COINS FROM THE GOLD CHEST\n");
    scanf("%d", &answer1);
    switch (answer1)
    {
    case 1:
        printf("ENTER NUMBER OF GOLD COINS...YOU WISH TO TAKE OUT FROM THE GOLD CHEST\n");
        scanf("%d", &answer2);
        if ((*n - answer2) > 0)
        {
            score = answer2;
            *n = *n - answer2;
            // printf("n in case 1 %d\n", *n); // FOR TESTING
        }
        break;
    case 2:
        if ((*n % 2) == 0)
        {
            score = *n / 2;
            *n = *n / 2;
            // printf("n in case 2 %d\n", *n); // FOR TESTING
        }
        break;
    default:
        printf("INVALID OPTION\n");
        break;
    }
    return score;
}

void result(int score1, int score2, char name1[20], char name2[20])
{
    if (score1 > score2)
    {
        printf("%s YOU Win\n", name1);
    }
    else if (score2 > score1)
    {
        printf("%s YOU Win\n", name2);
    }
    else
    {
        printf("IT'S A DRAW");
    }
}