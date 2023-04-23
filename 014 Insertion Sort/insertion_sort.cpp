#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;


void insertionSort(int n, vector<int> &arr){
    // From 1st index to last index skipping zero index
    for(int i = 1; i < n ; i++){
        // e.g 4 12 11 20 
        // suppose current = 11;        
        int current = arr[i];
        // suppose j = 12;
        int j = i-1;
        while(arr[j] > current && j >= 0){
            // values will be right shift 
            arr[j+1] = arr[j];
            j--;
        }
        // Loop terminates here it will run until the arr[j] > current now I have to place value       
        // j = 0 but i want to place current value at right side after 4 so will use j+1 
        // 11 will place after 4 
        arr[j+1] = current;
    }
}