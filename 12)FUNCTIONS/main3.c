//TYPE 3
#include <stdio.h>
void printstar(int n){
    for (int i = 0; i < n; i++)
    {
        printf("%c",'*'); //write in single quotes..bcz it's a character and not a string
    }
}
int main()
{
    printstar(7);
    return 0;
}
