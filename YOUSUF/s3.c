#include <stdio.h>
#include <string.h>

void storeData();

struct Company
{
    char serial_number[20], year_of_manufacture[20], material[20], quantity[20];
} data[10];
int total_engines = 10;


int main()
{
    int opt;
    int count = 0;
    storeData();

    for (int i = 0; i < total_engines; i++)
    {
        if ((data[i].serial_number[0] == 'B' || data[i].serial_number[0] == 'C') && (data[i].serial_number[1] == 'B' || data[i].serial_number[1] == 'C'))
        {
            if (data[i].serial_number[2] == '1' || data[i].serial_number[2] == '2' || data[i].serial_number[2] == '3' || data[i].serial_number[2] == '4' || data[i].serial_number[2] == '5' || data[i].serial_number[2] == '6')
            {
                printf("Engine Number %d\n", (i + 1));
                printf("\tSerial Number : %s\n", data[i].serial_number);
                printf("\tYear Of Manufacture : %s\n", data[i].year_of_manufacture);
                printf("\tMaterial : %s\n", data[i].material);
                printf("\tQuantity : %s\n", data[i].quantity);
                printf("--------*****&&&&****--------\n");
                count++;
            }
        }
    }
    if (count == 0)
    {
        printf("No Engines Serial Number Are Between AA0 to FF9\n");
    }
    return 0;
}

void storeData()
{
    char temp[30];
    printf("\n\nStoring Information Of %d Engines\t(Enter Capital Letters In Serial Number Eg: AA0,BB6,CC8 & so on)", total_engines);
    for (int i = 0; i < total_engines; ++i)
    {
        printf("\nFor Engine %d\n", i + 1);
        printf("Enter Serial Number: ");
        scanf("%s", data[i].serial_number);
        printf("Enter Year Of manufacture: ");
        scanf("%s", data[i].year_of_manufacture);
        printf("Enter Material: ");
        scanf("%s", data[i].material);
        printf("Enter Quantity: ");
        scanf("%s", data[i].quantity);
    }
    printf("\n\n\n");
}