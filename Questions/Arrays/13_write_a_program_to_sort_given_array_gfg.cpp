
#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;

// Selection Sort
// Note *arr will throw error, don't forget to use arr[]
void sortArray(int arr[], int n){
    // find minimum then place it in the beginning

    for(int i = 0; i <= 1; i++){  // For Testing Just iterate once e.g i <= 1
        // 1st iteration sab se smallest value zero index par place kro
        for(int j = i+1; j < n ; j++){
            if(arr[j] < arr[i]){
                swap(arr[j] , arr[i]);
            }
        }
    }
}


void printArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int arr[] =  {4,14,11,2,59,10};
    int size = sizeof(arr) / sizeof(int);

    printArr(arr, size);
    sortArray(arr, size);
    printArr(arr, size);


    return 0;
}