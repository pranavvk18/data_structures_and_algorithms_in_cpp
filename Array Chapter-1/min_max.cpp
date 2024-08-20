#include <iostream>
#include <limits>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " integers separated by spaces:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    int min_val = arr[0];
    int max_val = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }

    cout << "Minimum value in the array: " << min_val << endl;
    cout << "Maximum value in the array: " << max_val << endl;

    return 0;
}
