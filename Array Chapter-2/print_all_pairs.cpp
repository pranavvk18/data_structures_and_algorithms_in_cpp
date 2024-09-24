#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    int size = 4;

    for (int i = 0; i < size; i++) {
        for (int j = i ; j < size; j++) {
            // cout << "(" << arr[i] << "," << arr[j] << ") ";
            cout<<arr[i]<<","<<arr[j]<<endl;
        }
    }

    return 0;
}
