#include<iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 0, 1, 0, 0, 1, 0, 1};
    int size = 9;

    // Save the last element in a temporary variable
    int temp = arr[size - 1];

    // Shift elements to the right
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Place the saved element at the beginning
    arr[0] = temp;

    // Display the shifted array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
