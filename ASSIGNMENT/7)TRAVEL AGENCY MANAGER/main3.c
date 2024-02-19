/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/
#include <stdio.h>
#include <string.h>
typedef struct agency
{
    char name[45];
    int dlNo[65];
    int route[34];
    int kms[22];
}dr;
int main()
{
    dr d1,d2,d3;
    printf("ENTER THE DETAILS OF DRIVER NO 1\n");
    printf("ENTER THE NAME OF THE FIRST DRIVER\n");
    scanf("%s",&d1.name);
    printf("ENTER THE dlNo OF THE FIRST DRIVER\n");
    scanf("%s",&d1.dlNo);
    printf("ENTER THE ROUTE OF THE FIRST DRIVER\n");
    scanf("%s",&d1.route);
    printf("ENTER THE KMs OF THE FIRST DRIVER\n");
    scanf("%s",&d1.kms);

    printf("ENTER THE DETAILS OF DRIVER NO 2\n");
    printf("ENTER THE NAME OF THE SECOND DRIVER\n");
    scanf("%s",&d2.name);
    printf("ENTER THE dlNo OF THE SECOND DRIVER\n");
    scanf("%s",&d2.dlNo);
    printf("ENTER THE ROUTE OF THE SECOND DRIVER\n");
    scanf("%s",&d2.route);
    printf("ENTER THE KMs OF THE SECOND DRIVER\n");
    scanf("%s",&d2.kms);

    printf("ENTER THE DETAILS OF DRIVER NO 3\n");
    printf("ENTER THE NAME OF THE THIRD DRIVER\n");
    scanf("%s",&d3.name);
    printf("ENTER THE dlNo OF THE THIRD DRIVER\n");
    scanf("%s",&d3.dlNo);
    printf("ENTER THE ROUTE OF THE THIRD DRIVER\n");
    scanf("%s",&d3.route);
    printf("ENTER THE KMs OF THE THIRD DRIVER\n");
    scanf("%s",&d3.kms);

    system("cls");

    printf("\t\t\t********PRINTING INFORMATION OF THESE DRIVERS********\n");
    printf("FOR DRIVER NO 1:\n");
    printf("\tNAME IS %s",d1.name);
    printf("\tDL NUMBER IS %s",d1.dlNo);
    printf("\tROUTE IS %s",d1.route);
    printf("\tKM IS %d\n",d1.kms);

    printf("FOR DRIVER NO 2:\n");
    printf("\tNAME IS %s",d2.name);
    printf("\tDL NUMBER IS %s",d2.dlNo);
    printf("\tROUTE IS %s",d2.route);
    printf("\tKM IS %d\n",d2.kms);

    printf("FOR DRIVER NO 3:\n");
    printf("\tNAME IS %s",d3.name);
    printf("\tDL NUMBER IS %s",d3.dlNo);
    printf("\tROUTE IS %s",d3.route);
    printf("\tKM IS %d\n",d3.kms);
    return 0;
}