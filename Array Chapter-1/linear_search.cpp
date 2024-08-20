
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
    int target=10;
    for(int i=0;i<size;i++){
        if(target==arr[i]){
            cout<<"The target element is found at index "<<i<<"of array"<<endl;
            break;
        }
        else{
            cout<<"The target element is not found"<<endl;
        }
    }
    
}