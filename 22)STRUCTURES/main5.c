//USING ANOTHER LIBRARY
//SECOND WAY OF USING STRUCTURES
#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[30];
}harry, bob, john; //GLOBAL VARIABLE...WORKS IN "print function" and "main function"
void print(){
    harry.marks = 1;
    bob.marks = 2;
    john.marks = 3;
    printf("MARKS OF HARRY BOB JOHN ARE %d,%d,%d RESPECTIVELY\n",harry.marks,bob.marks,john.marks);
}
int main()
{
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
    print();
    return 0;
}