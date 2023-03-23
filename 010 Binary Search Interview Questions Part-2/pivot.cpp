#include<iostream>

using namespace std;

// NOTE: Draw Graph on Paper then will solve easily

int getPivot(int arr[], int size){
    int start = 0;
    int end = size -1;
    int mid = start + (end - start)/2;

    while(start < end){
        if(arr[mid] >= arr[0]){
            // it means mid is there on Line number 1 of Graph
            start = mid + 1;            
        }else{
            // it means mid is there on Line number 2 of Graph but not doing mid -1 because if i do then mid will come at line 1 again
            end = mid;
        }
         mid = start + (end - start)/2;
    }
    return start; // can return start or end 
}

int main(){

    int arr[5] =  {8, 10, 17, 1 ,3};
    cout << "Result of Pivot is at index No : " << getPivot(arr, 5);

    return 0;
}