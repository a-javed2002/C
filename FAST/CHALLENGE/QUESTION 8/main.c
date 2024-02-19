#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>
int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int prime(int *num)
{
    int count = 0;
    float d = 0;
    for (int i = 0; i < *num; i++)
    {
        d = (float)*num / (i + 1);
        for (int i = 0; i < *num; i++)
        {
            if (d == (i + 1))
            {
                count++;
            }
        }
    }
    if (count > 2)
    {
        // printf("%d IS A COMPOSITE NUMBER AS IT HAS %d FACTORS\n", *num, count);
        return 0;
    }
    else
    {
        // printf("%d IS A PRIME NUMBER\n", *num);
        return 1;
    }
}
int gcd(int num1, int num2)
{
    int GCD_Num;
    for (int i = 0; (i <= num1) && (i <= num2); ++i)
    {
        if ((num1 % i) == 0 && (num2 % i) == 0)
        {
            GCD_Num = i;
        } /* if num1 and num2 is completely divisible by i, the divisible number will be the GCD_Num */
    }
    printf(" GCD of two numbers %d and %d is %d.", num1, num2, GCD_Num);
    return 0;
}
int encrypt(int e, int n)
{
    // ENCRYPTION EQUATION
    int temp; // array to store values
    char m[100], c[100];       // array to store values
    printf("ENTER THE ENCRYPTED STRING FOR MORE ENCRYPTION\n");
    gets(m);
    printf("ENCRYPTED STRING IS: \n");
    for (int i = 0; i < 100 && m != '\0'; i++)
    {
        temp = (pow(m[i], e));
        c[i] = temp % n;
        printf("%d", c);
    }
}
// int decrypt(int d, int n)
// {
//     // ENCRYPTION EQUATION
//     int temp,temp2; // array to store values
//     char m[100], c[100];       // array to store values
//     printf("ENTER THE ENCRYPTED STRING FOR DECRYPTION\n");
//     gets(c);
//     printf("DECRYPTED STRING IS: \n");
//     for (int i = 0; i < 100 && m != '\0'; i++)
//     {
//         temp2=atoi(strcat(c[i],c[i+1]));
//         temp = (pow(temp2, d));
//         m[i] = temp % n;
//         printf("%d", m);
//     }
// }
int main()
{
    int random = 100;
    int p = 0, temp2 = 0;
    while (temp2 != 1)
    {
        p = generateRandomNumber(random) + 3; // generate Random Number
        // printf("%d\n", p);//random number
        temp2 = prime(&p); // p stores prime number......temp2 brings "return 1 or 0"..
        // printf("%d\n", temp2);//return 1 or 0..
    }

    printf("p %d\n", p);
    int q = p;
    while (q == p)
    {
        temp2 = 0;
        while (temp2 != 1)
        {
            q = generateRandomNumber(random) + 3; // generate Random Number
            // printf("%d\n", q);//random number
            temp2 = prime(&q); // q stores prime number......temp2 brings "return 1 or 0"..
            // printf("%d\n", temp2);//return 1 or 0..
        }
    }
    printf("q %d\n", q);

    int K = (p - 1) * (q - 1); // p and q should not be 1...
    int n = p * q;
    printf("k is %d and n is %d\n", K, n);

    temp2 = 0;
    int e;
    while (temp2 != 1)
    {
        e = generateRandomNumber(K) + 1;
        temp2 = prime(&e);
    }
    printf("e is %d\n", e);

    // GCD OR HCF
    // int a = 0;
    // gcd(&e, &K);

    int d, temp3 = 0;
    while (temp3 != 1)
    {
        d = (generateRandomNumber(K) + 1);
        temp3 = ((e)*d) % (K);
    }
    printf("d %d\n", d);
    int z;
    printf("ENTER 1 FOR ENCRYPTION\n");
    printf("ENTER 2 FOR DECRYPTION\n");
    scanf("%d", &d);
    switch (d)
    {
    case 1:
        printf("ENCRYPTION STARTED\n");
        encrypt(e, n);
        break;
    case 2:
        printf("DECRYPTION STARTED\n");
        decrypt(d, n);
        break;
    default:
        printf("INVALID SELECTION\n");
        break;
    }

    return 0;
}
// TARGET
// 0001032011110007520900210403