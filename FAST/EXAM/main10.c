#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int p = 0;
    int total_districts, total_branch_customers[30], total_district_customers[30], branch_sale[30], district_sale[30];
    printf("ENTER NUMBER OF DISTRICTS\n");
    scanf("%d", &total_districts);
    system("cls");
    for (int i = 0; i < total_districts; i++)
    {
        printf("\t\t\t\t\t\tDISTRICT %d\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf("ENTER DETAIL OF BRANCH %d\n", j + 1);
            printf("ENTER CUSTOMERS\n");
            scanf("%d", &total_branch_customers[p]);
            printf("ENTER TOTAL SALE\n");
            scanf("%d", &branch_sale[p]);
            printf("\n");
            p++;
        }
        system("cls");
    }
    // printf("\n");
    // for (int k = 0; k < p; k++) // FOR TESTING...
    // {
    //     printf("%d\n", total_branch_customers[k]);
    // }
    // printf("\np is %d\n", p);//FOR TESTING
    int a = 0;
    for (int i = 0; i < p; i = i + 3) // per district sale...
    {
        district_sale[a] = branch_sale[i] + branch_sale[i + 1] + branch_sale[i + 2];
        a++;
    }
    // printf("\n");
    // for (int q = 0; q < total_districts; q++) // FOR TESTING...
    // {
    //     printf("district %d sale is $%d\n", q + 1, district_sale[q]);
    // }
    // printf("\np is %d\n", p);//FOR TESTING
    a = 0;
    for (int i = 0; i < p; i = i + 3) // per district customers...
    {
        total_district_customers[a] = total_branch_customers[i] + total_branch_customers[i + 1] + total_branch_customers[i + 2];
        a++;
    }
    // printf("\n");
    system("cls");
    for (int q = 0; q < total_districts; q++)
    {
        printf("district %d total customers are %d\n", q + 1, total_district_customers[q]);
    }
    int temp1, temp2, greatest = 0, lowest = 99999;
    for (int g = 0; g < total_districts; g++)
    {
        if (district_sale[g] > greatest)
        {
            greatest = district_sale[g];
            temp1 = g;
        }
        if (district_sale[g] < lowest)
        {
            lowest = district_sale[g];
            temp2 = g;
        }
    }
    if (temp1 == 0)//neechay output may...district 0 print ho raha tha....bcz..hum district array index say lay rahay hain
    {
        temp1 = 1;
    }
    else if (temp2 == 0)
    {
        temp2 = 1;
    }
    printf("DISTRICT %d HAS GIVEN THE MOST PROFIT THAT IS $%d\n", temp1, greatest);
    printf("DISTRICT %d HAS GIVEN THE LESS PROFIT THAT IS $%d\n", temp2, lowest);
    return 0;
    //doing working..kis branch may customers zyada thay...for all districts...
}