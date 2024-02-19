// FOR RUNNING IN CMD:
// Open an elevated command prompt window.
// Enter the directory of the C code.
// Type gcc filename. c -o filename.exe and press Enter to compile.
// Run the program by typing its name and pressing Enter.
#include <iostream>
using namespace std;
void printStr(char string[]){
    char i;
    while (string[i]!='\0')
    {
        printf("%c",string[i]);
        i++;
    }
}
int main()
{
    char str[]="FASTNUCES";
    int size = sizeof str / sizeof str[0];
    printf("%d\n",size);
    if ((((size/2)-1)%2)==0)
    {
        size=(size/2);
    }
    else{
        size=(size/2)+1;
    }
    printf("%d\n",size);
    char i;
    int j=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
    if (j<=size)
    {
        printf("\n");
        j++;
    }
        i++;
    }
    return 0;
}