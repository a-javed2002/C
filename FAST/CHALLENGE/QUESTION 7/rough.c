#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char answer[20][150];
    int i, x, j = 0;
    char str[100];
    char str2[100];
    char result[100];
    char s1[100], s2[100];
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
                printf("99");
                str2[j] = rand() % 5 + 4;
                str2[j + 1] = rand() % 5 + 4;
            }
            if (str[i] == 'a' || str[i] == 'A')
            {
                printf("00");
                str2[j] = '0';
                str2[j + 1] = '0';
                // strcpy(result,"00");
            }
            else if (str[i] == 'b' || str[i] == 'B')
            {
                printf("01");
                str2[j] = '0';
                str2[j + 1] = '1';
            }
            else if (str[i] == 'c' || str[i] == 'C')
            {
                printf("02");
                str2[j] = '0';
                str2[j + 1] = '2';
            }
            else if (str[i] == 'd' || str[i] == 'D')
            {
                printf("03");
                str2[j] = '0';
                str2[j + 1] = '3';
            }
            else if (str[i] == 'e' || str[i] == 'E')
            {
                printf("04");
                str2[j] = '0';
                str2[j + 1] = '4';
            }
            else if (str[i] == 'f' || str[i] == 'F')
            {
                printf("05");
                str2[j] = '0';
                str2[j + 1] = '5';
            }
            else if (str[i] == 'g' || str[i] == 'G')
            {
                printf("06");
                str2[j] = '0';
                str2[j + 1] = '6';
            }
            else if (str[i] == 'h' || str[i] == 'H')
            {
                printf("07");
                str2[j] = '0';
                str2[j + 1] = '7';
            }
            else if (str[i] == 'i' || str[i] == 'I')
            {
                printf("08");
                str2[j] = '0';
                str2[j + 1] = '8';
            }
            else if (str[i] == 'j' || str[i] == 'J')
            {
                printf("09");
                str2[j] = '0';
                str2[j + 1] = '9';
            }
            else if (str[i] == 'k' || str[i] == 'K')
            {
                printf("10");
                str2[j] = '1';
                str2[j + 1] = '0';
            }
            else if (str[i] == 'l' || str[i] == 'L')
            {
                printf("11");
                str2[j] = '1';
                str2[j + 1] = '1';
            }
            else if (str[i] == 'm' || str[i] == 'M')
            {
                printf("12");
                str2[j] = '1';
                str2[j + 1] = '2';
            }
            else if (str[i] == 'n' || str[i] == 'N')
            {
                printf("13");
                str2[j] = '1';
                str2[j + 1] = '3';
            }
            else if (str[i] == 'o' || str[i] == 'O')
            {
                printf("14");
                str2[j] = '1';
                str2[j + 1] = '4';
            }
            else if (str[i] == 'p' || str[i] == 'P')
            {
                printf("15");
                str2[j] = '1';
                str2[j + 1] = '5';
            }
            else if (str[i] == 'q' || str[i] == 'Q')
            {
                printf("16");
                str2[j] = '1';
                str2[j + 1] = '6';
            }
            else if (str[i] == 'r' || str[i] == 'R')
            {
                printf("17");
                str2[j] = '1';
                str2[j + 1] = '7';
            }
            else if (str[i] == 's' || str[i] == 'S')
            {
                printf("18");
                str2[j] = '1';
                str2[j + 1] = '8';
            }
            else if (str[i] == 't' || str[i] == 'T')
            {
                printf("19");
                str2[j] = '1';
                str2[j + 1] = '9';
            }
            else if (str[i] == 'u' || str[i] == 'U')
            {
                printf("20");
                str2[j] = '2';
                str2[j + 1] = '0';
            }
            else if (str[i] == 'v' || str[i] == 'V')
            {
                printf("21");
                str2[j] = '2';
                str2[j + 1] = '1';
            }
            else if (str[i] == 'w' || str[i] == 'W')
            {
                printf("22");
                str2[j] = '2';
                str2[j + 1] = '2';
            }
            else if (str[i] == 'x' || str[i] == 'X')
            {
                printf("23");
                str2[j] = '2';
                str2[j + 1] = '3';
            }
            else if (str[i] == 'y' || str[i] == 'Y')
            {
                printf("24");
                str2[j] = '2';
                str2[j + 1] = '4';
            }
            else if (str[i] == 'z' || str[i] == 'Z')
            {
                printf("25");
                str2[j] = '2';
                str2[j + 1] = '5';
            }
            j = j + 2;
        }
        str2[j+1]='\0';
        printf("\nTHE ENCRYPTED STRING IS: ");
        puts(str2);
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