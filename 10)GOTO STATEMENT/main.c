#include <stdio.h>
int main(){
    label:
    printf("WE ARE IN LABEL ");
    goto end;
    printf("HELLO WORLD\n");
    goto label;
    end:
    printf("END");
} 
//BRO DON'T RUN IT.. 