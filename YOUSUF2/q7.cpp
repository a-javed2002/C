// C++ program to print all repeating elements
#include <bits/stdc++.h>
using namespace std;

void printRepeating(int arr[], int n)
{
    // Store elements and their counts in
    // hash table
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    // Since we want elements in same order,
    // we traverse array again and print
    // those elements that appear more than
    // once.
    for (int i = 0; i < n; i++)
    {
        if (mp[arr[i]] > 1)
        {
            cout << arr[i] << " ";

            // This is tricky, this is done
            // to make sure that the current
            // element is not printed again
            mp[arr[i]] = 0;
        }
    }
}

// Driver code
int main()
{
    int arr[] = {12, 10, 9, 45, 2, 10, 10, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    printRepeating(arr, n);
    return 0;
}
