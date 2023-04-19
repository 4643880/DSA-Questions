#include<iostream>
#include<vector>

using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;
    for(int i = 0; i < n ; i++){
        // 0 + 10 <= 50
        if(pageSum + arr[i] <= mid){
            pageSum = pageSum + arr[i];
        }else{
            studentCount++;
            pageSum = arr[i];
            if(studentCount > m || arr[i] > mid){
                return false;
            }            
        }
    }
    return true;    
}
int allocateBooks(vector<int> arr, int n, int m) {
    int start = 0;
    // Finding sum of array
    int sum = 0;
    for(int i = 0; i < n ; i++){
        sum = sum + arr[i];
    }
    int end = sum;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end){
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}