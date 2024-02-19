#include <stdio.h>
int main()
{
    int opt;
    float l, b, h, r;
    printf("Enter Choice\n");
    printf("0 = Square\n");
    printf("1 = Circle\n");
    printf("2 = Rectangle\n");
    printf("3 = Right-Angle Triangle\n");
    printf("4 = Parallelogram\n");
    scanf("%d", &opt);
    switch (opt)
    {
    case 0:
        printf("For Square,Enter A Side\n");
        scanf("%f", &l);
        printf("Area of Square Is %.2f unit Square\n", (l * l));
    case 1:
        printf("For Circle,Enter radius\n");
        scanf("%f", &r);
        printf("Area of Circle Is %.2f unit Square\n", (3.142 * (r * r)));
    case 2:
        printf("For Rectangle,Enter A Length\n");
        scanf("%f", &l);
        printf("For Rectangle,Enter A Breadth\n");
        scanf("%f", &b);
        printf("Area of Rectangle Is %.2f unit Square\n", (l * b));
    case 3:
        printf("For Right-Angle Triangle,Enter Length\n");
        scanf("%f", &l);
        printf("For Right-Angle Triangle,Enter Breadth\n");
        scanf("%f", &b);
        printf("Area of Right-Angle Triangle Is %.2f unit Square\n", (0.5 * (l * b)));
    case 4:
        printf("For Parallelogram,Enter Base\n");
        scanf("%f", &b);
        printf("For Right-Angle Triangle,Enter Height\n");
        scanf("%f", &h);
        printf("Area of Parallelogram Is %.2f unit Square\n", ((b * h)));
    default:
        printf("Invalid option\n");
        break;
    }
    return 0;
}