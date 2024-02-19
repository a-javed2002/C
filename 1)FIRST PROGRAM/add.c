#include <stdio.h> //pre processor statement

int main()  //main function...program execution start from here
{
    int a,b;   //define to integers
    printf("enter number of a\n"); //print this on console
    scanf("%d",&a); //scanf help to take input from user...which will come in "a"...& is address operator
    printf("enter number of b\n") ; // "\n" new line character
    scanf("%d",&b);
    printf("The sum is %d\n",a+b);
    return 0;
}
// write cls in terminal(T) to clear it
/* steps that compiler takes
1)Pre-processing--comments removed..macros expand...#include files are gather in one file...this process is saved in ".i extension file"
2)Compilation--compile .i extension file into assembly lang in ".s extension file"
3)Assembly--convert into machine level instructions in ".o extension files"
4)Linking--convert all .o extension files into an executable file in ".exe extension file"
we have 2 types of linking
i)Static linking.
ii)Dynamic linking.
"to make all these files...write in terminal the below given command"
gcc -Wall -save-temps main3.c -o harry
where main.c is file name and harry will be the name of .exe extension file name
5)Loading--Program loads in RAM
*/