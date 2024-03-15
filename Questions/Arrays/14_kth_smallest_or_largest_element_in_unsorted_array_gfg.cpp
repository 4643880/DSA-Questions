

#include<iostream>
using namespace std;
#include<algorithm>

void printArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// e.g k is 4 then I have to print 4th smallest from array 
void kthSmallest(int *arr, int size, int k){
    
    sort(arr, arr+size);

    cout <<  arr[k-1] << endl; // using -1 because array starts from zero index
}

void kthLargest(int *arr, int size, int k){
    
    sort(arr, arr+size);

    cout <<  arr[size - k] << endl; // using -1 because array starts from zero index

}

int main(){

    int arr[] = {4,3,25,1,95,22}; 
    int size = sizeof(arr) / sizeof(int);
    printArr(arr, size);
    kthSmallest(arr, size, 3);
    kthLargest(arr, size, 3);


    return 0;
}