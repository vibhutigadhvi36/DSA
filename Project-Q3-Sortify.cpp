// Sort Squad 
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

    // Ascending order
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Ascending order:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Descending order
    cout << "\nDescending order:\n";
    for(int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}