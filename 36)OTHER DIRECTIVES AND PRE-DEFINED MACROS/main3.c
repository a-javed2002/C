#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("FILE NAME IS %s\n",__FILE__);
    printf("TODAY DATE IS %s\n",__DATE__);
    printf("TODAY TIME IS %s\n",__TIME__);
    printf("LINE NUMBER IS %d\n",__LINE__);
    printf("ANSI: %d\n",__STDC__);//..print 1..if compiler compiles with ANSI standard..
    return 0;
}
/*
PIC 2
#ifdef--agar  koi macro defined hai tab ye true return karta hai. 
#ifndef--agar koi macro defined nahi hai to ye true return karta hai warna falese return karta hai.
#if--if ka matab hota hai 'agar'.
#else--else ka matlab hota hai 'varna'.
#elif--'agar' aur 'varna' dono ko saath me dikhata hai "agar koi variable aisa hai to aisa kar do varna
        use waisa kar do", is chiz ke liye hi iska use hota hai.
*/