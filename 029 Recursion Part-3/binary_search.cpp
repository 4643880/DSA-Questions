
#include<iostream>
using namespace std;

void print(int arr[], int start, int end){
    for(int i = start; i <= end; i++){
        cout << arr[i] << "  ";
    }cout << endl;
}
bool binarySearch(int *arr, int start , int end, int key){
    cout << endl;
    print(arr, start, end);


    int mid = start + (end-start) / 2;

    // Base Case
    if(start > end){
        return 0;
    }

    if(arr[mid] == key){
        return 1;
    }else if(key > arr[mid]) {
        bool remainingPart = binarySearch(arr, mid + 1, end, key);
        return remainingPart;
    }else{
        bool remainingPart = binarySearch(arr, start, mid -1, key);
        return remainingPart;
    }
    
}

int main(){

    int arr[7] = {2,4,8,12,15,19,21};
    int size = 7;
    int start = 0;
    int end = size -1;

    bool result = binarySearch(arr, 0, end, 122);

    if(result == true){
        cout << "Key is present" << endl;
    }else{
        cout << "Key is not present" << endl;
    }
    return 0;
}