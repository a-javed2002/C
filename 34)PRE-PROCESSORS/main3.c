#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // press ctrl and click on stdio,string...etc...to check pre=processors commands in them..
    //uper path bhi show hoga...
    return 0;
}
// gcc -Wall -save-temps main3.c -o abd
/*
FIRST CLASS LECTURE....AND ADVANCED DETAIL... 
steps that compiler takes
1)Pre-processing--comments removed..macros expand...#include files are gather in one file...this process is saved in ".i extension file"
2)Compilation--compile .i extension file into assembly lang in ".s extension file"...in short assembly level instructions are generated
3)Assembly--convert into machine level instructions in ".o extension files"......in short assembly level instructions are converted into machine code...whereas printf are not resolved...
4)Linking--convert all .o extension files into an executable file in ".exe extension file"...in short links the function implementations..
we have 2 types of linking
i)Static linking.
ii)Dynamic linking.
"to make all these files...write in terminal the below given command"
gcc -Wall -save-temps main3.c -o harry
where main.c is file name and harry will be the name of .exe extension file name
5)Loading--Program loads in RAM
*/