#include <string>
#include <iostream>
using namespace std;

void sortString(string &str)
{
    for (int i = 0; i < str.length() - 1; i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] > str[j])
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter Number Of test Cases" << endl;
    cin >> n;
    while (n--)
    {
        string first, last;
        cout << "Enter First Name And last Name" << endl;
        cin >> first >> last;
        sortString(first);
        sortString(last);
        // sort(first.begin(), first.end());
        // sort(last.begin(), last.end());
        if (first == last)
            cout << "ANAGRAM" << endl;
        else
            cout << "NOT ANAGRAM" << endl;
    }
    return 0;
}