#include<iostream>
using namespace std;
void sort_zeros_ones_twos(int count_0, int count_1, int count_2, int arr[], int size);

void count_zeros_ones_twos(int arr[], int size) {
    int count_0 = 0, count_1 = 0, count_2 = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            count_0++;
        } else if (arr[i] == 1) {
            count_1++;
        } else if (arr[i] == 2) {
            count_2++;
        }
    }
    sort_zeros_ones_twos(count_0, count_1, count_2, arr, size);
}

void sort_zeros_ones_twos(int count_0, int count_1, int count_2, int arr[], int size) {
    int i = 0;
    for (; i < count_0; i++) {
        arr[i] = 0;
    }
    for (; i < count_0 + count_1; i++) {
        arr[i] = 1;
    }
    for (; i < count_0 + count_1 + count_2; i++) {
        arr[i] = 2;
    }
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {0, 1, 2, 2, 2, 1, 0, 1, 0, 0};
    count_zeros_ones_twos(arr, 10);

    return 0;
}
