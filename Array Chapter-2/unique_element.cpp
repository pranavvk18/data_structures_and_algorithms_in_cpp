// problem:Every number occurs twice except one number
#include<iostream>
using namespace std;
int unique(int arr[],int n){
    // here it is initialised with zero because Zero XOR with number will be that number
    int ans=0;
    // /apply XOR with all elememts
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
int arr[]={1,2,3,4,1,2,3};
int n=7;

int ans=unique(arr,n);
cout<<"The final ans is "<<ans<<endl;
}