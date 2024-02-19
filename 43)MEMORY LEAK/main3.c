//WINDOWS HAVE TASK MANAGER
//MAC HAVE ACTIVITY MONITOR
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
int main()
{
    int a, i = 0;
    int *i2;
    while (i < 45545)
    {
        printf("Welcome to Code With Harry\n");
        i2 = malloc(34444 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
        free(i2); // Without this we will encounter a situation of memory leak
    }
    return 0;
}
// PIC-3 WHEN WE START OUR PROGRAM....MEMORY IS 0.4MB
//PIC-4 WHEN WE CONTINUE OUR PROGRAM...BY PRESSING ENTER...MEMORY BECOMES 7.4MB
//WE PRESS ENTER MORE...THE STORAGE WILL BECOME MORE..
//SO WE HAVE TO free(i2);....TO SAVE OUR STORAGE...AS SHOWN IN PIC-5...MEMORY REMAINS 0.4MB..
/*
Reasons for Memory leak:-
Memory leaks are particularly serious issues for programs. Memory leaks in C happen because of these three reasons:

we do not free the memory that is no longer needed
we do try to free the memory, but we do not have the reference to a dangling pointer.
we try to free the memory using the wrong function
*/