#include<iostream>
using namespace std;
void ones_complement(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            arr[i]=1;
        }
        else{
            arr[i]=0;
        }
    }
    cout<<"The ones's complement of the given array is:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    cout<<endl;

}
int main(){
    int arr[10];
    cout<<"Enter the 0's and 1's"<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
        while (arr[i] != 0 && arr[i] != 1) {
        cout << "Invalid input. Please enter only 0's or 1's: ";
        cin >> arr[i];
        }

        cout << "You have entered correct data!" << endl;
    }
    ones_complement(arr,10);
    return 0;
}
