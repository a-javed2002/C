// C program to Encrypt the String
// using ! and @

#include <stdio.h>
#include <string.h>

// Function to encrypt the string
void encrypt(char input[100])
{

    // evenPos is for storing encrypting
    // char at evenPosition
    // oddPos is for storing encrypting
    // char at oddPosition
    char evenPos = '@', oddPos = '!';

    int repeat, ascii;

    for (int i = 0; i <= strlen(input); i++)
    {

        // Get the number of times the character
        // is to be repeated
        ascii = input[i];
        repeat = ascii >= 97 ? ascii - 96 : ascii - 64;

        for (int j = 0; j < repeat; j++)
        {
            // if i is odd, print '!'
            // else print '@'
            if (i % 2 == 0)
                printf("%c", oddPos);
            else
                printf("%c", evenPos);
        }
    }
}

// Driver code
int main()
{
    char input[100] = {'A', 'b', 'C', 'd'};

    // Encrypt the String
    encrypt(input);
    return 0;
}