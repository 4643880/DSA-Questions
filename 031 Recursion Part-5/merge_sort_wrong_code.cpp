
// https://youtu.be/4z9I6ZmeLOQ
#include<iostream>
using namespace std;

void merge(int *arr, int start, int end){
    int mid = start + (end - start) / 2;

    // Creating 2 Arrays 
    int lenghtOfFirstArr = mid - start + 1;
    int lengthOfSecondArr = end - mid;

    int *first = new int[lenghtOfFirstArr];
    int *second =  new int[lengthOfSecondArr];

    // Copying the value in first array from start to mid
    int mainArrayIndex = start;
    for(int i = 0; i < lenghtOfFirstArr; i++){
        first[i] = arr[mainArrayIndex++];
    }
    // Copying the value in second array from mid to end
    mainArrayIndex = mid + 1;
    for(int i = 0; i < lengthOfSecondArr; i++){
        second[i] = arr[mainArrayIndex++];
    }


    // merge 2 sorted array
    int index1 = 0; 
    int index2 = 0;

    mainArrayIndex = start;

    while(index1 < lenghtOfFirstArr && index2 < lengthOfSecondArr){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }else{
            arr[mainArrayIndex++] = first[index2++];
        }
    }

    while(index1 < lenghtOfFirstArr){
        arr[mainArrayIndex] = first[index1++];
    }

    while(index2 < lengthOfSecondArr){
        arr[mainArrayIndex] = second[index2];
    }
}


void mergeSort(int *arr,int start, int end){
    // Base Case
    if(start >= end){
        return;
    }

    int mid = start + (end - start) / 2;

    // Sort Left Part
    mergeSort(arr, start, mid);

    // Sort Right Part
    mergeSort(arr, mid+1, end);


    merge(arr, start , end);

}

int main(){
    
    int arr[5] = {2,5,1,6,9};
    int n = 5;

    mergeSort(arr, 0,n-1);

    for(int i = 0; i < n ; i++){
        cout << arr[i] << "    ";  
    }


    return 0;
}


