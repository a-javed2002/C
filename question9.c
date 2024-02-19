#include <stdio.h>
int main()
{
    int budget=40000000;
    printf("AREA OF SINGLE ROOM IN square feet IS %.3f\n",44*10.764);
    printf("AREA OF 10 ROOMS IN square feet IS %.3f\n",44*10.764*10);
    int totalKharcha=500000*10*4;
    if(budget>totalKharcha){
        printf("BUDGET IS ENOUGH SAVING %d RS",(budget-totalKharcha));
    }
    else if(budget<totalKharcha){
        printf("BUDGET IS NOT ENOUGH REQUIRED AMOUNT IS %d RS",totalKharcha-budget);
    }
    else{
        printf("EQUAL KHARCHA AND BUDGET");
    }
    return 0;
}