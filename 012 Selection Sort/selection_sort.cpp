#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void selectionSort(vector<int>& arr, int n)
{   
    // Selection Sort: Round 1 => Find min then place it in the beginning
    // Selection Sort: Compare value in complete unsorted array 
    // e.g 6,2,8,4,10
    for(int i = 0; i < n-1 ; i++){        
        for(int j = i+1; j < n; j++){
            // i = 6, j = 2 
            // 2 < 6
            if(arr[j] < arr[i]){
                swap(arr[j], arr[i]);
            }
        }        
    }
}