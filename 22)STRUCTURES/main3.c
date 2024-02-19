//USING ANOTHER LIBRARY
#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[30];
};
int main()
{
    struct Student harry, bob, john; //LOCAL VARIABLE
    harry.id = 123; //"structure name = harry"...."member name = id"
    bob.id = 456;
    john.id = 789;
    harry.marks = 45;
    bob.marks = 47;
    john.marks = 49;
    harry.fav_char = 'a';
    bob.fav_char = 'b';
    john.fav_char = 'c';
    printf("HARRY'S ID: %d\n",harry.id);
    printf("MARKS OF HARRY are %d\n",harry.marks);
    printf("HARRY FAVOURITE CHARACTER IS %c\n",harry.fav_char);
    printf("bob ID: %d\n",bob.id);
    printf("MARKS OF bob are %d\n",bob.marks);
    printf("bob FAVOURITE CHARACTER IS %c\n",bob.fav_char);
    printf("john ID: %d\n",john.id);
    printf("MARKS OF john are %d\n",john.marks);
    printf("john FAVOURITE CHARACTER IS %c\n",john.fav_char);
    strcpy(harry.name,"TOKYO");
    printf("FULL NAME OF HARRY IS %s\n",harry.name);
    return 0;
}