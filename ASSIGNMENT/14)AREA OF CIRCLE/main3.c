// AREA OF CIRCLE USING FUNCTION POINTERS
// EUCLIDEAN MANHATTAN MINKOWSKI AND HAMMING DISTANCE...GOOGLE IT
// #include <stdio.h>
// #include <stdlib.h>
// int Edistance(int x1, int y1, int x2, int y2)
// {
// return 0;
// }
// float areaOfCircle(int x1, int y1, int x2, int y2, <function pointer here> )
// {
// }
// int main()
// {
// take x1, y1 and x2, y2 from the user using scanf
//     return 0;
// }
#include <stdio.h>
#include <math.h>
#define PI 3.142
float distance(float x1, float y1, float x2, float y2)
{
    float result;
    result = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("distance is %f\n", result);
    return result;
}
float areaOfCircle(float distance)
{
    float area;
    area = PI * pow((distance), 2);
    return area;
}
int main()
{
    float x1, x2, y1, y2;
    printf("ENTER x1\n");
    scanf("%f", &x1);
    printf("ENTER y1\n");
    scanf("%f", &y1);
    printf("ENTER x2\n");
    scanf("%f", &x2);
    printf("ENTER y2\n");
    scanf("%f", &y2);
    printf("THE AREA OF CIRCLE IS %.3f units square\n",areaOfCircle(distance(x1, y1, x2, y2)));
    // Edistance(x1, y1, x2, y2);
    return 0;
}