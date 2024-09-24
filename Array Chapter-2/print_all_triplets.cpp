#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    int size = 4;

    for (int i = 0; i < size; i++) {
        for (int j = i ; j < size; j++) {
           for(int k=j;k<size;k++){
            cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
           }
            
        }
    }

    return 0;
}
