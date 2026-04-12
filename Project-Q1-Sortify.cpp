// Q-1 Mission: Remove the Twins
#include <iostream>
using namespace std;

int main() {
    int arr[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Unique elements are:\n";

    for(int i = 0; i < n; i++) {
        bool isDuplicate = false;

        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }

        if(!isDuplicate) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}