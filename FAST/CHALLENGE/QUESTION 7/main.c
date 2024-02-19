#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char answer[20][150];
    int i, x;
    char str[100];
    int temp, num;
    printf("\nPlease enter a string:\t");
    gets(str);
    printf("\nPlease choose following options:\n");
    printf("1 = Encrypt the string.\n");
    printf("2 = Decrypt the string.\n");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("THE ENCRYPTED STRING IS: ");
        for (i = 0; (i < 100 && str[i] != '\0'); i++)
        {
            if (str[i] == ' ')
            {
                srand(time(NULL));
                printf("%d", rand() % 30 + 50);
            }
            if (str[i] == 'a' || str[i] == 'A')
            {
                printf("00");
            }
            else if (str[i] == 'b' || str[i] == 'B')
            {
                printf("01");
            }
            else if (str[i] == 'c' || str[i] == 'C')
            {
                printf("02");
            }
            else if (str[i] == 'd' || str[i] == 'D')
            {
                printf("03");
            }
            else if (str[i] == 'e' || str[i] == 'E')
            {
                printf("04");
            }
            else if (str[i] == 'f' || str[i] == 'F')
            {
                printf("05");
            }
            else if (str[i] == 'g' || str[i] == 'G')
            {
                printf("06");
            }
            else if (str[i] == 'h' || str[i] == 'H')
            {
                printf("07");
            }
            else if (str[i] == 'i' || str[i] == 'I')
            {
                printf("08");
            }
            else if (str[i] == 'j' || str[i] == 'J')
            {
                printf("09");
            }
            else if (str[i] == 'k' || str[i] == 'K')
            {
                printf("10");
            }
            else if (str[i] == 'l' || str[i] == 'L')
            {
                printf("11");
            }
            else if (str[i] == 'm' || str[i] == 'M')
            {
                printf("12");
            }
            else if (str[i] == 'n' || str[i] == 'N')
            {
                printf("13");
            }
            else if (str[i] == 'o' || str[i] == 'O')
            {
                printf("14");
            }
            else if (str[i] == 'p' || str[i] == 'P')
            {
                printf("15");
            }
            else if (str[i] == 'q' || str[i] == 'Q')
            {
                printf("16");
            }
            else if (str[i] == 'r' || str[i] == 'R')
            {
                printf("17");
            }
            else if (str[i] == 's' || str[i] == 'S')
            {
                printf("18");
            }
            else if (str[i] == 't' || str[i] == 'T')
            {
                printf("19");
            }
            else if (str[i] == 'u' || str[i] == 'U')
            {
                printf("20");
            }
            else if (str[i] == 'v' || str[i] == 'V')
            {
                printf("21");
            }
            else if (str[i] == 'w' || str[i] == 'W')
            {
                printf("22");
            }
            else if (str[i] == 'x' || str[i] == 'X')
            {
                printf("23");
            }
            else if (str[i] == 'y' || str[i] == 'Y')
            {
                printf("24");
            }
            else if (str[i] == 'z' || str[i] == 'Z')
            {
                printf("25");
            }
        }
        break;

    case 2:
        printf("THE DECRYPTED STRING IS: ");
        for (i = 0; (i < 100 && str[i] != '\0'); i = i + 2)
        {
            if (str[i] == '0' && str[i + 1] == '0')
            {
                printf("A");
            }
            else if (str[i] == '0' && str[i + 1] == '1')
            {
                printf("B");
            }
            else if (str[i] == '0' && str[i + 1] == '2')
            {
                printf("C");
            }
            else if (str[i] == '0' && str[i + 1] == '3')
            {
                printf("D");
            }
            else if (str[i] == '0' && str[i + 1] == '4')
            {
                printf("E");
            }
            else if (str[i] == '0' && str[i + 1] == '5')
            {
                printf("F");
            }
            else if (str[i] == '0' && str[i + 1] == '6')
            {
                printf("G");
            }
            else if (str[i] == '0' && str[i + 1] == '7')
            {
                printf("H");
            }
            else if (str[i] == '0' && str[i + 1] == '8')
            {
                printf("I");
            }
            else if (str[i] == '0' && str[i + 1] == '9')
            {
                printf("J");
            }
            else if (str[i] == '1' && str[i + 1] == '0')
            {
                printf("K");
            }
            else if (str[i] == '1' && str[i + 1] == '1')
            {
                printf("L");
            }
            else if (str[i] == '1' && str[i + 1] == '2')
            {
                printf("M");
            }
            else if (str[i] == '1' && str[i + 1] == '3')
            {
                printf("N");
            }
            else if (str[i] == '1' && str[i + 1] == '4')
            {
                printf("O");
            }
            else if (str[i] == '1' && str[i + 1] == '5')
            {
                printf("P");
            }
            else if (str[i] == '1' && str[i + 1] == '6')
            {
                printf("Q");
            }
            else if (str[i] == '1' && str[i + 1] == '7')
            {
                printf("R");
            }
            else if (str[i] == '1' && str[i + 1] == '8')
            {
                printf("S");
            }
            else if (str[i] == '1' && str[i + 1] == '9')
            {
                printf("T");
            }
            else if (str[i] == '2' && str[i + 1] == '0')
            {
                printf("U");
            }
            else if (str[i] == '2' && str[i + 1] == '1')
            {
                printf("V");
            }
            else if (str[i] == '2' && str[i + 1] == '2')
            {
                printf("W");
            }
            else if (str[i] == '2' && str[i + 1] == '3')
            {
                printf("X");
            }
            else if (str[i] == '2' && str[i + 1] == '4')
            {
                printf("Y");
            }
            else if (str[i] == '2' && str[i + 1] == '5')
            {
                printf("Z");
            }
            else
            {
                printf(" ");
            }
        }
        break;

    default:
        printf("\nError\n");
    }
    return 0;
}