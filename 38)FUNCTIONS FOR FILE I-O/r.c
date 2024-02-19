#include <stdio.h>
void reverse(int i);
int main()
{
    reverse(1);
}
void reverse(int i)
{
    if (i > 5)
    {
        return;
    }
    i++;
    reverse((i));
    printf("%d ", i);
}