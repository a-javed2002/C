#include <iostream>
using namespace std;

#define MAX 100

int main()
{
    int arr[MAX];
    int n, i, j;
    int temp;
    int count = 0;

    cout << "Enter total number of elements to read: ";
    cin >> n;

    if (n < 0 || n > MAX)
    {
        cout << "Input valid range!!!" << endl;
        return -1;
    }

    for (i = 0; i < n; i++)
    {
        cout << "Enter Element For Index [" << i << "] ";
        cin >> arr[i];
    }

    cout << "Array elements You Entered:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                count++;
                cout << "Index return By Fn " << j - 1;
                return 0;
            }
        }
    }

    if (count == 0)
    {
        cout << "The Array Is Already Sorted In Descending Order --> -1 by Fn";
    }

    return 0;
}
