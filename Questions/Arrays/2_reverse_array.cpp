#include<iostream>
using namespace std;

void mySwap(int &first, int &second){
    int temp = first;
    first = second;
    second = temp;
}

void reverse(int arr[], int size){
    int start = 0; 
    int end = size -1;


    while(start < end){
        mySwap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size) {
    
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[6] = {1,4,0,5,-2,15};
    int brr[5] = {2,6,3,9,4};

    int sizeArr = sizeof(arr) / sizeof(int);
    int sizeBrr = sizeof(brr) / sizeof(int);

    // Printing before swaping
    printArray(arr, sizeArr);
    printArray(brr, sizeBrr);

    // Swaping
    reverse(arr, 6);
    reverse(brr, 5);

    // Printing After Swaping
    printArray(arr, 6);
    printArray(brr, 5);


    return 0;
}