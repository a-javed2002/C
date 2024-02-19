// press ctrl and click on functions...example on int,srand,time,scanf..etc
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateRandomNumber(int n){
    srand(time(NULL));
    return rand()%n;
}
int main()
{
    int a;
    srand(time(NULL));//srand takes seed as an input..is defined inside "stdio.h" ..time null gives random time in seconds
    printf("ENTER A NUMBER\n");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        printf("%d)THE RANDOM NUMBER BETWEEN 0 TO 100 IS %d\n", i + 1, rand() % 100);
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d)THE RANDOM NUMBER BETWEEN 0 TO 5 IS %d\n", i + 1, rand() % 5);
    }
    srand(45);//we have fixed the seed..thus get the same value..
    for (int i = 0; i < a; i++)
    {
        printf("%d)THE RANDOM NUMBER IS %d..(IT IS FIXED..RUN THE PROGRAM AGAIN..IT WILL GIVE SAME VALUE)\n", i + 1, rand() % 100);
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d)THE RANDOM NUMBER IS %d..(BY FUNCTION)\n", i + 1, generateRandomNumber(a));
    }
    return 0;
}