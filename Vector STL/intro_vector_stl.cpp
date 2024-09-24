#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v4) {
    int size = v4.size(); 
    for (int i = 0; i < size; i++) {
        cout << v4[i] << endl;
    }
}

int main() {
    // vector<int> array;
    // array.push_back(5);
    // array.push_back(10);
    // array.push_back(15);
    // array.push_back(25);
    // print(array);

    //both the statements are same
    // vector<int>v={1,2,3,4};
    // vector<int>v2{1,2,3,4};
    // print(v);

    //how to copy the vector
    vector<int>v3{1,2,3,4};
        vector<int>v4(v3);
    return 0;
}
