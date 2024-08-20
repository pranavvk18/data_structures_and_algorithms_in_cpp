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
    cout<<"The array elements are:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }

    //here the addres for both these code will be same
    cout<<"The addresss of tthe arry is "<<&arr<<endl;
    cout<<"The addresss of tthe arry is "<<arr<<endl;
return 0;

}