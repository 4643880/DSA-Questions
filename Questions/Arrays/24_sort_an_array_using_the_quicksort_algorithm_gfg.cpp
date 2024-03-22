
// Easy Example through diagrams
// https://www.geeksforgeeks.org/quick-sort/
// Similar Lecture watched from apna college 
// Divide and conquer algorithm

#include<iostream>
using namespace std;

int partition(int arr[], int left, int right){
    
    // Assuming that pivit is at the end of array
    int pivitElement = arr[right];

    // Declaring 2 pointers first one will be at start and second one will be at start -1
    
    int i = left-1;

    for(int j = left; j < right; j++){
        // will compare pivit on each iteration if arr[j] < the will swap otherwise will not swap
        if(arr[j] < pivitElement){
            i++; // increasing second pointer that was denoting to previous value
            swap(arr[i], arr[j]);
        }
    }

    // After Traversing I'll swap pivit that assumed in the beginning i+1 will be right place for it 
    swap(arr[i+1], arr[right]);

    // returning index no of the pivit
    return (i+1);
}

void quickSortAlgo(int arr[], int left, int right){
    

    if(left < right){
        // pi is the index number of pivot
        int pi = partition(arr, left, right);

        // Because pivit already has reached to it's right or correct place
        // so, we'll not include it we'll use pi + 1 & pi -1
        quickSortAlgo(arr, left, pi-1);
        quickSortAlgo(arr, pi+1, right);
    }
}

void printArray(int arr[], int arr_size)
{

    for (int i = 0; i < arr_size; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[] = {10,7,8,9,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    printArray(arr, n);
    quickSortAlgo(arr, 0, n-1);
    printArray(arr, n);
}
