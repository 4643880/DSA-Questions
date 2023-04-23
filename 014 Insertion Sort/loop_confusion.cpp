


#include<iostream>

using namespace std;

void gettingLoop(int arr[], int n){
    for(int i = 1; i < n ; i++){
        cout << arr[i] << " Index is: "<< i << endl;
    }
}

int main(){

    int arr[5] = {1,5,7,2,4};

    gettingLoop(arr, 5);

    return 0;
}