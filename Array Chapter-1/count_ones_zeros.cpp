#include <iostream>
using namespace std;

void count(int arr[], int size) {
    int zero_count = 0;
    int one_count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            zero_count++;
        } else if (arr[i] == 1) {
            one_count++;
        } else {
            cout << "There are elements other than 0's and 1's" << endl;
            return;
        }
    }
    cout << "The number of zeros are: " << zero_count << endl;
    cout << "The number of ones are: " << one_count << endl;
}

int main() {
    int size;
    cout << "Enter the size of an array: " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array (0s and 1s only): " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    count(arr, size);
    return 0;
}
