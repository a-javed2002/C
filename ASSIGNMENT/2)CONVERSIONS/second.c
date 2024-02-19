#include <stdio.h>
int main()
{
    int a;
    float c,b;
    start:
    printf("1)km to miles\n");
    printf("2)inches to foot\n");
    printf("3)cm to inches\n");
    printf("4)pound to kg\n");
    printf("5)inches to meter\n");
    printf("6)QUIT\n");
    scanf("%d",&a);
    if (a == 1){
        printf("ENTER km\n");
        scanf("%f",&b);
        c = b*0.621371;
        printf("%.5f miles\n",c);
    }
    else if (a == 2){
        printf("ENTER inches\n");
        scanf("%f",&b);
        c = b*0.0833333;
        printf("%.5f foot\n",c);
    }
    else if (a == 3){
        printf("ENTER cm\n");
        scanf("%f",&b);
        c = b*0.393701;
        printf("%.5f inches\n",c);
    }
    else if (a == 4){
        printf("ENTER pound\n");
        scanf("%f",&b);
        c = b*0.0833333;
        printf("%.5f kg\n",c);
    }
    else if (a == 5){
        printf("ENTER inches\n");
        scanf("%f",&b);
        c = b*0.0254;
        printf("%.5f meter\n",c);
    }
    else if (a == 6){
        goto end;
    }
    else{
        printf("INVALID OPTION CHOOSEN\n");
    }
    goto start;
    end:
    return 0;
}
