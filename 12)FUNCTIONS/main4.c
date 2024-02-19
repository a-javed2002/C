//TYPE 2
#include <stdio.h>
int takenumber(){
    int i;
    printf("ENTER A NUMBER\n");
    scanf("%d",&i);
    return i;
}
int main()
{
    int c;
    c = takenumber();
    printf("THE NUMBER ENTERED IS %d\n",c);
    return 0;
}
