#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,0,1,0,0,1,0,1};
    int size=9;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<size;i++){

    cout<<arr[i]<<endl;
    }
}