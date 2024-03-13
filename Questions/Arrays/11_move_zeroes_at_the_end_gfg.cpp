


#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void moveZeroAtEnd(int *arr, int size){
    int nonZeroIndex = 0;

    for(int i = 0; i < size; i++){

        if(arr[i] != 0){
            swap(arr[i], arr[nonZeroIndex]);
            nonZeroIndex++;
        }
    }
}


int main(){
    int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
    int size = sizeof(arr) / sizeof(int);


    printArray(arr, size);

    moveZeroAtEnd(arr, size);

    printArray(arr, size);

    return 0;
}