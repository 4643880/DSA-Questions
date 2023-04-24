#include<iostream>
#include<array>
#include<vector>
using namespace std;


int main(){
    //===============================================================
    // Array
    //===============================================================
    // Basic Array
    int arr[3] = {1,2,3};

    // Stl Array
    array<int, 4> a = {4,5,6,7};
    int size = a.size();

    for(int i = 0; i < size ; i++){
        cout << a[i] << endl;
    }

    cout << " Element at index no 2 : "<< a.at(2) << endl;
    cout << " Empty or not : "<< a.empty() << endl;
    cout << " First Element : "<< a.front() << endl;
    cout << " Last Element : "<< a.back() << endl;



    return 0;
}