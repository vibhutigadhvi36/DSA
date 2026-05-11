// Q-5-Searching-Algorithm..
#include <iostream>
using namespace std;

int main()
{
    int n, key, pos = -1, count = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        count++;

        if (arr[i] == key)
        {
            pos = i + 1;
            break;
        }
    }

    if (pos != -1)
    {
        cout << "Element found at position: " << pos << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    cout << "Number of comparisons: " << count << endl;

    return 0;
} 