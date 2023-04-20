#include<iostream>
#include<vector>

using namespace std;

bool isPossible(vector<int> &boards, int k, int mid){
    int painterCount = 1;
    int unitOfBoard = 0;

    for(int i = 0; i < boards.size(); i++){
        // cout << "values of arr :" << boards[i] << endl;
        if( unitOfBoard + boards[i] <= mid){
            unitOfBoard = unitOfBoard + boards[i];
        }else{
            painterCount++;
            unitOfBoard = boards[i];
            if(painterCount > k || boards[i] > mid){
                return false;
            }
        }

    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int start = 0;
    int sum = 0;
    for (int i = 0; i <= boards.size(); i++) {
      sum = sum + boards[i];
    }
    int end = sum;
    int mid = start + (end - start)/2;
    int ans = -1;
    // cout << "START :" << start << endl;
    // cout << "END :" << end << endl;
    // cout << "MID :" << mid << endl;
    // cout << "Array Length :" << boards.size() << endl;    
    while(start <= end){
        if(isPossible(boards, k, mid)){
            ans = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;

}