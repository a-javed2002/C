// #include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
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
        // sort(first.begin(), first.end());
        // sort(last.begin(), last.end());
        if (first == last)
            cout << "ANAGRAM" << endl;
        else
            cout << "NOT ANAGRAM" << endl;
    }
    return 0;
}