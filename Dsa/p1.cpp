#include <iostream>
using namespace std;

int main()
{

    int num[8];
    int size = 8;
    int start = 0;
    int end = size - 1;

    cout << "Enter 8 numbers:\n";
    for (int i = 0; i < size; ++i)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num[i];
    }

    while (true)
    {
        if (start > end)
        {
            break;
        }
        else
        {
            cout << num[start] << " ";
            cout << num[end] << " ";
            start++;
            end--;
        }
    }

    return 0;
 }
