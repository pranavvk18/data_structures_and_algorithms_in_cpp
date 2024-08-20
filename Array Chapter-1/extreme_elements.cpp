#include <iostream>
using namespace std;

void extreme(int arr[], int size) {
    int right = size - 1;
    int left = 0;
    while (left <= right) {
        if(left==right){
             cout << "Left: " << arr[left] << endl;
        }
        else{
        cout << "Left: " << arr[left] << endl;
        cout << "Right: " << arr[right] << endl;
        }
        left++;
        right--;
    }
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
    extreme(arr, size);
    return 0;
}
