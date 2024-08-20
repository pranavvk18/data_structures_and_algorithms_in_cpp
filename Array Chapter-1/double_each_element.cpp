
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The array elements before doubling are:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
      cout<<"The array elements after doubling are:"<<endl;
    for(int i=0;i<size;i++){
        cout<<2*arr[i]<<" ";
    }


return 0;

}