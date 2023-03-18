#include<iostream>

using namespace std;


int binarySearch(int arr[], int size, int key){
    // HINT FOR MID: int = (2^31) -1 maximum int ki value ha
    // Formula = start + end / 2 -------- (2^31-1) + (2^31-1) / 2 int ki range say bahar ho gaya dual max value plus karnay say 
    // New Formula = start + (end-start)/2
    int start = 0;
    int end = size -1;
    int mid = start + (end-start)/2;
    
    while(start <= end){

        if(key == arr[mid]){
            return mid;
        }
        
        if(key > arr[mid]){
            // Going to right part of array
            //  Updating start
            start = mid + 1;
        }
        else{
            // Going to left part of array
            //  Updating end
            end = mid - 1;
        }
        //  Updating Mid
        mid = start + (end-start)/2;

    }
    return -1;
}   

int main(){
    int evenArr[6] = {2,4,6,8,12,18};
    int oddArr[5] = {3, 8, 11, 14, 16};


    int evenIndex = binarySearch(evenArr, 6, 12);
    cout << "Index of 12 is : " << evenIndex << endl;


    int oddIndex = binarySearch(oddArr, 5, 11);
    cout << "Index of 11 is : " << oddIndex << endl;


    return 0;
}