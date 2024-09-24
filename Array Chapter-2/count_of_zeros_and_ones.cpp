#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,1,0,0,1,0,1,0,0,1};
    int zero_count=0;
    int one_count=0;
    for(int i=0;i<10;i++){
        if(arr[i]==1){
            one_count++;
        }
        else{
            zero_count++;
        }
    }
    cout<<"Total number of 0's in array"<<zero_count<<endl;
    cout<<"Total number of 1's in array"<<one_count<<endl;
    cout<<"The sorted array:"<<endl;
    for(int i=0;i<zero_count;i++){
        arr[i]=0;
    }
    for(int i=zero_count;i<10;i++){
        arr[i]=1;
    }
    for(int i=0;i<10;i++){
        cout<<arr[i];
    }
    cout<<endl;
    return 0;

    

}