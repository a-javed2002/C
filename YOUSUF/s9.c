#include <stdio.h>

void storeData();
void showData();

struct Volume
{
    float length, width, height;
} box[5];

int main()
{
    storeData();
    showData();
    return 0;
}

void storeData()
{
    printf("\n\nStoring Information Of 5 Boxes:");
    for (int i = 0; i < 5; ++i)
    {
        printf("\nFor Box %d,\n", i + 1);
        printf("Enter length: ");
        scanf("%f", &box[i].length);
        printf("Enter width: ");
        scanf("%f", &box[i].width);
        printf("Enter height: ");
        scanf("%f", &box[i].height);
    }
}

void showData()
{
    printf("\nPrinting Information\n");
    for (int i = 0; i < 5; i++)
    {
        if (box[i].height <= 41)
        {
            printf("Volume Of Box %d is %.2f\n", (i+1),((box[i].length) * (box[i].width) * (box[i].height)));
        }
        else
        {
            printf("Box %d Cannot Be TRansported Due To Height as %.2f Feet Is Greater Then 41 Feet\n", (i+1), (box[i].height));
        }
    }
}