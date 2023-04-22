#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;


void bubbleSort(vector<int>& arr, int n)
{   
    // Bubble Sort: Round 1 => Find max then place it at the end
    // Bubble Sort: Compare neighbor value only
    // if I have 5 values then outer loop should run 4 times
    for (int i = 0; i < n-1; i++) {
        //  cout << i << endl;
        // n-i-1 => 5-0-1 => 4
        for(int j = 0; j < n-i-1; j++){  
            // a > b then swap
            // a < b ignore
            // e.g 6 2 8 4 10
            // 6 > 2 swap otherwise ignore       
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }    

}
