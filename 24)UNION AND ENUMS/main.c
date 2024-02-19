#include <stdio.h>
#include <string.h>
union Student{
    int id;
    int marks;
    char fav_char;
    char name[34];
};
int main()
{
    union Student s1;
    s1.id=123;
    s1.marks=34;
    s1.fav_char='A';
    printf("THE id IS %d\n",s1.id);
    printf("THE marks IS %d\n",s1.marks);
    printf("THE fav_char IS %s\n",s1.fav_char);
    strcpy(s1.name,"HARRY");
    printf("THE name IS %c\n",s1.name);
    return 0;
}
//ONLY THE LAST COMMAND WILL RUN(PRINT)...BECAUSE WE ARE USING UNION
//IN STRUCTURE MEMORY USE IS (int+int+char+char)(4+4+1+1) 10 BYTES
//IN UNION MEMORY USE IS 4 BYTES...BECAUSE THE LARGEST IS 4...THAT COMES FROM "int"...