#include<iostream>

using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size ; i++){
        cout << arr[i] << "";
    }
}

void sortZeroOne(int arr[], int size){
    int left = 0;
    int right = size-1;

    while(left < right ){
        // First part
        while(arr[left] == 0 && left < right){
            left++;
        }
        while(arr[right] == 1 && left < right){
            right--;
        }

        // second part
        if(left < right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}


int main(){
    int arr[8] = {1,1,0,0,0,0,1,0};


    printArray(arr, 8);
    sortZeroOne(arr, 8);

    cout << endl;
    printArray(arr, 8);
    return 0;
}