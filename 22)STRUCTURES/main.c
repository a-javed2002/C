/*
PIC 4
RIGHT...WE DECLARE AND THEN USE "E.g: int a;"
LEST...WE DECLARE AND USE AT A SAME TIME "E.g: int a = 0;"
*/
#include <stdio.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
};
int main()
{
    struct Student harry, bob, john;
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
    return 0;
}