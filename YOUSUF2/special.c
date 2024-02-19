#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void alphaRandom(int row, int col, char alpha[row][col]);
void printArray(int row, int col, char alpha[row][col]);
int alphaSearchRow(int row, int col, char alpha[row][col], char *search);
int alphaSearchCol(int row, int col, char alpha[row][col], char *search);
int main()
{

    int row = 5, col = 6;
    char alpha[row][col];
    int score = 0;
    int chk = 0;
    int temp = 0;
    if (row > col)
    {
        temp = row;
    }
    else
    {
        temp = col;
    }
    char search[temp + 1];

    while (1)
    {
        alphaRandom(row, col, alpha);
        printArray(row, col, alpha);

        printf("Enter Your Word(%d characters only) Then Press 'Enter Key': ", temp);
        gets(search);

        if (strcmp(search, "END") == 0)
        {
            break;
        }

        chk = alphaSearchRow(row, col, alpha, &search);
        if (chk)
        {
            score++;
        }
        else
        {
            chk = alphaSearchCol(row, col, alpha, &search);
            if (chk)
            {
                score++;
            }
            else
            {
                score--;
            }
        }
        printf("\nScore Is %d\n", score);
    }
}

void gameScore(int val, int *score)
{
    if (val == 1)
    {
        *score += 1;
    }
    else
    {
        *score -= 1;
    }
    printf("\nScore Is %d\n", *score);
}

int alphaSearchCol(int row, int col, char alpha[row][col], char *search)
{
    char *ptr = NULL;
    char temp[row][col];
    int x = 0;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            temp[0][j] = alpha[x][i];
            if (x == (row - 1))
            {
                // horizontal chk
                ptr = strstr(temp, search);
                if (ptr != NULL) /* Substring found */
                {
                    printf("\n'%s' contains '%s'\n", temp, search);
                    return 1;
                }
                else /* Substring not found */
                {
                    printf("\n'%s' doesn't contain '%s'\n", temp, search);
                }
            }
            x++;
        }
        x = 0;
    }
    return 0;
}

int alphaSearchRow(int row, int col, char alpha[row][col], char *search)
{
    char *ptr = NULL;
    char temp[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            temp[0][j] = alpha[i][j];
            if (j == (col - 1))
            {
                // horizontal chk
                ptr = strstr(temp, search);
                if (ptr != NULL) /* Substring found */
                {
                    printf("\n'%s' contains '%s'\n", temp, search);
                    return 1;
                }
                else /* Substring not found */
                {
                    printf("\n'%s' doesn't contain '%s'\n", temp, search);
                }
            }
        }
    }

    return 0;
}

void printArray(int row, int col, char alpha[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%c\t", alpha[i][j]);
        }
        printf("\n");
    }
}

void alphaRandom(int row, int col, char alpha[row][col])
{
    char id[] = {'5', '0', '7', '9'};
    int x = 0;
    char randChar;
    int randNum = 0;
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            count++;
            randNum = 26 * (rand() / (RAND_MAX + 1.0));

            randNum = randNum + 97;

            randChar = (char)randNum;

            if (count == ((col * (row - 1)) + 1) || count == ((col * (row - 1)) + 2) || count == ((col * (row - 1)) + 3) || count == ((col * (row - 1)) + 4))
            {
                alpha[i][j] = id[x];
                x++;
            }
            else
            {
                alpha[i][j] = randChar;
            }
        }
    }
}