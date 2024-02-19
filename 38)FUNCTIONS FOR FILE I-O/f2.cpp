#include <iostream>
using namespace std;

int input(int i)
{
    int value;
    cout << "Enter value For Index " << i << endl;
    cin >> value;
    if (value >= 10 && value <= 100)
    {
        return value;
    }
    return false;
}
int main()
{
    int max = 2;
    int arr[max];
    int value;
    bool a = false;

    for (size_t i = 0; i < max; i++)
    {
        cout << "Enter value For Index " << i << endl;
        cin >> value;
        if (value >= 10 && value <= 100)
        {
            cout << "ok";
        }
        else
        {
            while (a == false)
            {
                cout << "Value You Enter Is out Of Range";
                a = input(i);
            }
        }
    }
    return 0;
}