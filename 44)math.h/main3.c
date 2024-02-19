#include <stdio.h>
#include <math.h>

int main()
{
    printf("square root %d\n",sqrt(9));
    printf("exponent %f\n",exp(1));
    printf("log %f\n",log(2));//wrong
    printf("log10() %f\n",log10(100.0));
    printf("%f\n",fabs(-5.2));
    printf("%f\n",ceil(4.5));
    printf("%f\n",floor(-4.5));
    printf("pow %d\n",pow(3,3));
    printf("%f\n",fmod(4.5,2.0));
    printf("sin %f IN RADIANS\n",sin(90));
    printf("cos %f IN RADIANS\n",cos(90));
    printf("tan %f IN RADIANS\n",tan(45));
    return 0;
}