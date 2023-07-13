


#include<iostream>
using namespace std;

void swap(int arr[], int i , int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r){

    // First pointer I can choose any index of array as pivot i selected last one
    // Second pointer i = left -1    
    // Third pointer j = left
    int pivot = arr[r];
    int i = l-1;  
 
    for(int j = l; j < r; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr, i , j);
        }
    }
    // After completing the loop 
    // Before the i index all the elements will be less than pivot 
    // After the i index all the elements will be greater than pivot so the correct position for pivot will be i+1 replace with with r that is pivot
    swap(arr,i+1, r);


    // returning the index number of pivot
    return i+1;
}

void quickSort(int arr[], int left, int right){  

    if(left < right){
        // pi is the index number of pivot
        int pi = partition(arr, left, right);
        
        // Because pivit already has reached to it's right or correct place
        // so, we'll not include it we'll use pi + 1 & pi -1
        quickSort(arr, left , pi-1);
        quickSort(arr, pi+1, right);
    }
}


int main(){

    int arr[5] = {2,4,1,6,9};
    int n = 5;

    quickSort(arr, 0, n-1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << "  ";
    }

    return 0;
}