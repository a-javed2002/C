// FOR RUNNING IN CMD:
// Open an elevated command prompt window.
// Enter the directory of the C code.
// Type gcc filename. c -o filename.exe and press Enter to compile.
// Run the program by typing its name and pressing Enter.
#include <iostream>
using namespace std;
int main()
{
    int count = 7, temp = 1;
    // printf("%d\n", count / 2);
    for (int i = 0; i < count; i++)
    {
        if (i < ((count / 2) + 1))
        {
            for (int j = 0; j < (i + 1); j++)
            {
                printf("**\t");
            }
        }
        else
        {
            for (int j = 0; j < ((count / 2) + 1) - temp; j++)
            {
                printf("**\t");
            }
            temp++;
        }
        printf("\n");
    }
    return 0;
}