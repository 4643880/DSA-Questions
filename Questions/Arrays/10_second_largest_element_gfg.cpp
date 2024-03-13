#include<iostream>
#include<limits.h>
using namespace std;


void print2largest(int *arr, int size){
    int firstLargest = INT_MIN;
    int secondLargest = INT_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i] > firstLargest){
            secondLargest = firstLargest;
            firstLargest = arr[i];
        }

        else if(arr[i] > secondLargest && arr[i] != firstLargest){
            secondLargest = arr[i];
        }
    }

    if(secondLargest == INT_MIN)
        cout << "There is no second largest element" << endl;
    else
        cout << "Second Largest Element is: " << secondLargest << endl;

}


int main(){

    int arr[] = { 12, 35, 1, 10, 34, 1 };
    int n = sizeof(arr) / sizeof(int);
    print2largest(arr, n);

    return 0;
}