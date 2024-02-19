#include <stdio.h>
int reverse(int num){
    int rev=0,rem=0;
    while (num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    return rev;
}
int main()
{
    int num;
    printf("ENTER A NUMBER\n");
    scanf("%d",&num);
    printf("THE REVERSED OF NUMBER %d IS %d", num,reverse(num));
    return 0;
}