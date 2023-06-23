

#include<iostream>
using namespace std;


void bubbleSortArray(int *arr, int n){
    // Base Case - already sorted
    if(n == 0 || n == 1){
        return;
    }

    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i + 1]){
            swap(arr[i], arr[i + 1]);
        }
    }

    bubbleSortArray(arr, n-1);
}

void print(int *arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << "  ";
    }
}

int main(){
    int arr[5] = {4,2,9,7,1};

    print(arr, 5);
    bubbleSortArray(arr, 5);
    cout << endl;
    print(arr, 5);

    return 0;
}