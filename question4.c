#include <stdio.h>
int main()
{
    int gas1,hotel1,meal1,gas2,hotel2,meal2;
    printf("ENTER THE PRICE OF GAS FOR SITE 1\n");
    scanf("%d",&gas1);
    printf("ENTER THE PRICE OF HOTEL ROOM FOR 6 DAYS FOR SITE 1\n");
    scanf("%d",&hotel1);
    printf("ENTER THE PRICE OF MEAL FOR 7 DAYS FOR SITE 1\n");
    scanf("%d",&meal1);
    printf("ENTER THE PRICE OF GAS FOR SITE 2\n");
    scanf("%d",&gas2);
    printf("ENTER THE PRICE OF HOTEL ROOM FOR 6 DAYS FOR SITE 2\n");
    scanf("%d",&hotel2);
    printf("ENTER THE PRICE OF MEAL FOR 7 DAYS FOR SITE 2\n");
    scanf("%d",&meal2);

    int total1=0,total2=0;
    total1=gas1+hotel1+meal1;
    total2=gas2+hotel2+meal2;
    printf("SITE 1 TOTAL TRIP = %d\n",total1);
    printf("SITE 2 TOTAL TRIP = %d\n",total2);
    printf("SITE 1 > SITE 2 = %d\n",(total1>total2));
    printf("SITE 1 < SITE 2 = %d\n",(total1<total2));
    printf("SITE 1 = SITE 2 = %d\n",(total1==total2));
    return 0;
}