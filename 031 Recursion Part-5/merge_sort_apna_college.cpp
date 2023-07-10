

#include<iostream>
using namespace std;


void merge(int arr[], int l, int mid,  int r){
    
    
    // Size of 2 Temporary Arrays
            // 4 - 0 + 1 => 5
    int n1 = mid - l + 1;
            // 9 - 4 => 5  if l is 0 & r is 9 it means it has 10 values
    int n2 = r - mid;

    // Creating 2 Temporary Arrays
    int *arr1 = new int[n1];
    int *arr2 = new int[n2];
    

    // Copying the values in first array from start to mid
    for(int i = 0; i < n1; i++){
        arr1[i] = arr[l+i]; // 0+0 => 0
    }

    // Copying the values in second array from mid to end
    for(int i = 0; i < n2; i++){
        arr2[i] = arr[mid+1+i]; // 4 + 1 + 0 => 5
    }


    // Initializing 2 pointers
    int i = 0;
    int j = 0;

    int mainArrayIndexIsK = l;

    while(i < n1 && j < n2){
        if(arr1[i] < arr2[i]){
            arr[mainArrayIndexIsK] = arr1[i];
            i++;
            mainArrayIndexIsK++;
        }
        else{
            arr[mainArrayIndexIsK] = arr2[j];
            j++;
            mainArrayIndexIsK++;
        }
    }

    // Case 1: i pointer has reached to last index but j did'nt reach
    // Case 2: j pointer has reached to last index but i did'nt reach

    while(i < n1){
        arr[mainArrayIndexIsK] = arr1[i];
        i++;
        mainArrayIndexIsK++;
    }

    while(j < n2){
        arr[mainArrayIndexIsK] = arr2[j];
        j++;
        mainArrayIndexIsK++;
    }






}


void mergeSort(int arr[], int l, int r){
    if(l < r){
        int mid = (l + r) / 2;

        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);

        // merging both arrays
        merge(arr, l, mid, r);

    }
}

int main(){

    int arr[] = {5,4,3,2,1};
    mergeSort(arr, 0 , 4);

    for(int i = 0; i <= 4 ; i++){
        cout << arr[i] << "   ";
    }

    return 0;
}
