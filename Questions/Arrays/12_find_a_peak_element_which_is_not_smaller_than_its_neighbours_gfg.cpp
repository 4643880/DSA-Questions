

#include<iostream>

using namespace std;




void solve(int *arr, int size){
    int start = 0;
    int end = size -1;

    while(start <= end){
        
        int mid = start + (end - start) / 2;
        // If index is last or first e.g {1} 
        if( (mid == 0 || arr[mid] > arr[mid - 1]) && (mid == size-1 || arr[mid] > arr[mid + 1])){
            cout << "Peak Element is: " << arr[mid] << endl;
            break;
        }else if(mid == 0 || arr[mid] > arr[mid -1]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    
    }
}

int main(){
    int arr[] = { 1, 3, 20, 4, 1, 0 };; // After 20 array is decreasing
    int size = sizeof(arr) / sizeof(int);

    solve(arr, size);

    return 0;
}

// https://youtu.be/M7wenwOp6cE?feature=shared