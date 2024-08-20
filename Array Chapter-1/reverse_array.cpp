#include <iostream>
#include <limits>
#
using namespace std;
void reverse(int arr[],int size){
    int left=0;int right=size-1;
    int arr2[size];
     while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }

}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " integers separated by spaces:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    reverse(arr,size);
    cout << "Reversed array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

}