#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int discount(int tot);
void receipt(char name[][30], int quantity[], int bill, int num, int dcPrice, int tdc);
int main()
{
    char CustomerName[20], Itemname[200][30];
    int CategoryNo, ItemNo, TotalPrice, quantity[200], i = 0;
    time_t t;
    time(&t);
    system("color 70");
    printf("\t\t\t\tSupermarket Management System\n");
    puts("\tPRICE LIST");
    puts("**************************************");
    puts("Appliances:\n \t1)Oven 30,000 Rs\n\t2)Hair Dryer 2,000 Rs\n\t3)Refrigerator 40000 Rs\n\t4)Washing Machine 45000 Rs\n\t5)Air Conditioner 50,000\n");
    puts("Crockery:\n \t1)Plates 250 Rs\n\t2)Spoons 200 Rs\n\t3)Glass 300 Rs\n\t4)Pans 4500 RS\n\t5)Bowls 400 Rs\n");
    puts("Fruits:\n \t1)Apples 20 Rs\n\t2)Bananas 30 Rs\n\t3)Mangoes 40 Rs\n\t4)Grapes 70 Rs\n\t5)Peaches 25 Rs\n");
    puts("Grocery:\n \t1)Bread 20 Rs\n\t2)Rice 30 Rs\n\t3)Oil 40 Rs/lit\n\t4)Frozen Food Items 70 Rs\n\t5)Dairy Items 25 Rs\n");
    puts("**************************************");
    puts("Press Enter key to continue!");
    getchar();
    system("cls");
    printf("\t\t\t\tSupermarket Management System\n");
    printf("Please enter the customers name: ");
    gets(CustomerName);
    system("cls");
    printf("\t\t\t\tSupermarket Management System\n");
    while (CategoryNo != 5)
    {
        printf("From which of the following category of items did %s purchase?(Enter Item number only)\n", CustomerName);
        puts("1)Appliances\t2)Crockery\t3)Fruits\t4)Grocery\t5)Exit");
        scanf("%d", &CategoryNo);
        switch (CategoryNo)
        {
            puts("Which product from this category was purchased?(Enter Item no only)");
        case 1:
            puts("1)Oven\t2)Hair dryer\t3)Refrigerator\t4)Washing Machine\t5)Air Conditioner");
            scanf("%d", &ItemNo);
            switch (ItemNo)
            {
            case 1:
                printf("How many ovens did %s purchase?\n", CustomerName);
                scanf("%d", &quantity[i]);
                TotalPrice = TotalPrice + (30000 * quantity[i]);
                strcpy(Itemname[i], "Oven");
                break;
            case 2:
                printf("How many Hair dryers did %s purchase?\n", CustomerName);
                scanf("%d", &quantity[i]);
                TotalPrice = TotalPrice + (2000 * quantity[i]);
                strcpy(Itemname[i], "Hair Dryers");
                break;
            case 3:
                printf("How many Refrigerator did %s purchase?\n", CustomerName);
                scanf("%d", &quantity[i]);
                TotalPrice = TotalPrice + (40000 * quantity[i]);
                strcpy(Itemname[i], "Refrigerator");
                break;
            case 4:
                printf("How many Washing Machine did %s purchase?\n", CustomerName);
                scanf("%d", &quantity[i]);
                TotalPrice = TotalPrice + (45000 * quantity[i]);
                strcpy(Itemname[i], "Oven");
                break;
            case 5:
                printf("How many Air Conditioner did %s purchase?\n", CustomerName);
                scanf("%d", &quantity[i]);
                TotalPrice = TotalPrice + (50000 * quantity[i]);
                strcpy(Itemname[i], "Washing Machine");
                break;
            default:
                printf("\nYou have entered the wrong item number. Please try again! ");
            }
            break;
        case 2:
            puts("1)Plates\t2)Spoons\t3)Glass \t4)Pans\t5)Bowls");
            scanf("%d", &ItemNo);
            switch (ItemNo)
            {

            case 1:
                printf("How many plates did %s purchase?\n", CustomerName);
                scanf("%d", &quantity[i]);
                TotalPrice = TotalPrice + (250 * quantity[i]);
                strcpy(Itemname[i], "Plates");
                break;
            case 2:
                printf("How many spoons did %s purchase?\n", CustomerName);
                scanf("%d", &quantity[i]);
                TotalPrice = TotalPrice + (200 * quantity[i]);
                strcpy(Itemname[i], "Spoons");
                break;
            case 3:
                printf("How many Glass did %s purchase?\n", CustomerName);
                scanf("%d", &quantity[i]);
                TotalPrice = TotalPrice + (300 * quantity[i]);
                strcpy(Itemname[i], "Glass");
                break;
            case 4:
                printf("How many Pans did %s purchase?\n", CustomerName);
                scanf("%d", &quantity[i]);
                TotalPrice = TotalPrice + (4500 * quantity[i]);
                strcpy(Itemname[i], "Pens");
                break;
            case 5:
                printf("How many Bowls did %s purchase?\n", CustomerName);
                scanf("%d", &quantity[i]);
                TotalPrice = TotalPrice + (400 * quantity[i]);
                strcpy(Itemname[i], "Bowls");
                break;
            default:
                printf("You have entered the wrong item number. Please try again! ");
            }
            break;
        case 3:
            puts("1)Apple\t2)Banana\t3)Mango\t4)Grapes\t5)Peach");
            scanf("%d", &ItemNo);
            switch (ItemNo)
            {

            case 1:
                printf("How many apples did %s purchase?\n", CustomerName);
                scanf("%d", &quantity[i]);
                TotalPrice = TotalPrice + (20 * quantity[i]);
                strcpy(Itemname[i], "Apple");
                break;
            case 2:
                printf("How many bananas did %s purchase?\n", CustomerName);
                scanf("%d", &quantity[i]);
                TotalPrice = TotalPrice + (30 * quantity[i]);
                strcpy(Itemname[i], "Banana");
                break;
            case 3:
                printf("How many Mangoes did %s purchase?\n", CustomerName);
                scanf("%d", &quantity[i]);
                TotalPrice = TotalPrice + (40 * quantity[i]);
                strcpy(Itemname[i], "Mangoes");
                break;
            case 4:
                printf("How many Grapes did %s purchase?\n", CustomerName);
                scanf("%d", &quantity[i]);
                TotalPrice = TotalPrice + (70 * quantity[i]);
                strcpy(Itemname[i], "Grapes");
                break;
            case 5:
                printf("How many Peaches did %s purchase?\n", CustomerName);
                scanf("%d", &quantity[i]);
                TotalPrice = TotalPrice + (25 * quantity[i]);
                strcpy(Itemname[i], "Peaches");
                break;
            default:
                printf("You have entered the wrong item number. Please try again! ");
            }
            break;
        case 4:
            puts("1)Bread\t2)Rice\t3)Oil\t4)Frozen Foods\t5)Dairy");
            scanf("%d", &ItemNo);
            switch (ItemNo)
            {

            case 1:
                printf("How many Bread did %s purchase?\n", CustomerName);
                scanf("%d", &quantity[i]);
                TotalPrice = TotalPrice + (20 * quantity[i]);
                strcpy(Itemname[i], "Bread");
                break;
            case 2:
                printf("How many Rice did %s purchase?\n", CustomerName);
                scanf("%d", &quantity[i]);
                TotalPrice = TotalPrice + (30 * quantity[i]);
                strcpy(Itemname[i], "Rice");
                break;
            case 3:
                printf("How many oils did %s purchase?\n", CustomerName);
                scanf("%d", &quantity[i]);
                TotalPrice = TotalPrice + (40 * quantity[i]);
                strcpy(Itemname[i], "Oil");
                break;
            case 4:
                printf("How many Frozen Foods did %s purchase?\n", CustomerName);
                scanf("%d", &quantity[i]);
                TotalPrice = TotalPrice + (70 * quantity[i]);
                strcpy(Itemname[i], "Frozen Food");
                break;
            case 5:
                printf("How many Dairy items did %s purchase?\n", CustomerName);
                scanf("%d", &quantity[i]);
                TotalPrice = TotalPrice + (25 * quantity[i]);
                strcpy(Itemname[i], "Dairy items");
                break;
            default:
                printf("You have entered the wrong item number. Please try again! ");
            }
            break;
        case 5:
            puts("Thanks for visiting our supermarket");
            break;
        default:
            puts("Invalid Input!,Try Again");
        }
        i++;
        system("cls");
    }
    system("cls");
    int dcPrice, tdc;
    dcPrice = discount(TotalPrice);
    tdc = TotalPrice - dcPrice;
    system("cls");
    puts("\t\t\tRECEIPT");
    printf("Customer Name:%s\n", CustomerName);
    printf("Date/Time:%s ", ctime(&t));
    FILE *ptr = NULL;
    ptr = fopen("file.txt", "a");
    fprintf(ptr, "Date/Time:%s\n", ctime(&t));
    fprintf(ptr, "Customer Name:%s\n", CustomerName);
    fclose(ptr);
    receipt(Itemname, quantity, TotalPrice, i, dcPrice, tdc);
}
int discount(int tot)
{
    int choice, chk, c1 = 2, c2 = 2, c3 = 2;
    char promo1[6], promo2[6], promo3[6], promo[6];
    strcpy(promo1, "000000");
    strcpy(promo2, "ffffff");
    strcpy(promo3, "999999");
    while (choice != 4)
    {
        puts("The following discounts are available:");
        puts("1)Loyalty card Discount: 30%\n2)Purchase above 5000: 20%\n3)Promo Code\n4)Exit");
        puts("Which discount is the customer eligible for");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            tot = tot - (tot * 0.3);
            system("cls");
            break;
        case 2:
            tot = tot - (tot * 0.2);
            system("cls");
            break;
        case 3:
            puts("Enter the promocode:");
            scanf(" %s", promo);
            c1 = strcmp(promo, promo1);
            c2 = strcmp(promo, promo2);
            c3 = strcmp(promo, promo3);
            if (c1 == 0)
            {
                tot = tot - (tot * 0.2);
            }
            else if (c2 == 0)
            {
                tot = tot - (tot * 0.4);
            }
            else if (c3 == 0)
            {
                tot = tot - (tot * 0.5);
            }
            else
            {
                puts("Invalid promo code!");
            }
            break;
        case 4:
            break;
        default:
            puts("Wrong Input! Try again");
        }
    }
    return tot;
}
// receipt(Itemname, quantity, TotalPrice, i, dcPrice, tdc);
void receipt(char name[][30], int quantity[], int bill, int num, int dcPrice, int tdc)
{
    FILE *ptr = NULL;
    ptr = fopen("file.txt", "a");
    int i;
    puts("**************************************************************************************");
    printf("\n");
    puts("\t\tPurchased Items     Quantity");
    printf("\n");
    fprintf(ptr, "\t\tPurchased Items     Quantity\n");
    for (i = 0; i < num; i++)
    {
        if (quantity[i] == 0)
        {
            continue;
        }
        else
        {

            printf("\t\t\t%s\t\t%d\n", name[i], quantity[i]);
            fprintf(ptr, "\t\t\t%s\t\t%d\n", name[i], quantity[i]);
        }
    }
    printf("\n");
    puts("**************************************************************************************");
    printf("Total Bill before Discount: %d RS\n", bill);
    printf("Discounts availed: %d RS\n", tdc);
    printf("Total Bill after Discounts: %d RS\n", dcPrice);
    fprintf(ptr,"Total Bill before Discount: %d RS\n", bill);
    fprintf(ptr,"Discounts availed: %d RS\n", tdc);
    fprintf(ptr,"Total Bill after Discounts: %d RS\n\n", dcPrice);
    fclose(ptr);
}