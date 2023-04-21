#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;


bool isPossible(vector<int> &stalls, int k, int mid){
    // NOTE: mid = mid distance, start = start distance, end = end distance

    // cow no. 1 
    int cowCount = 1;  

    // previous cow position is on 0 index  
    int previousCowPosition = stalls[0];

    // Vector is already sorted e.g 0,3,4,7,9,10

    for(int i = 0; i < stalls.size() ; i++){ 
        // mid was 5 
        // Finding distance
        // Formula: stalls[i] - previousFirstCowPosition
        // 3 - 0 => 3 is my distance                      
        if(stalls[i] - previousCowPosition >= mid){
            // According to condition 3 distance is less than 5(mid distance) which means can't place 2nd cow here
            // But if (0-7 = 7) 7 distance is greater than or equal 5 then wll place 2nd cow
            // place cow
            previousCowPosition = stalls[i];
            cowCount++;

            // If i successfully place the all given cows then will return true otherwise will return false
            if(cowCount == k){
                return true;
            }          
            
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    // NOTE: mid = mid distance, start = start distance, end = end distance
    sort(stalls.begin(), stalls.end());
    int start = 0;
    int maxi = -1;
    for(int i = 0; i < stalls.size() ; i++){
        maxi = max(maxi,stalls[i]);
    }
    int end = maxi;
    int mid = start + (end - start)/2;
    int ans = -1;
    // cout << "START :" << start << endl;
    // cout << "END :" << end << endl;

    while(start <= end){
        // Vector is already sorted e.g 0,3,4,7,9,10
        // mid: will be 5
        if(isPossible(stalls, k, mid)){
            ans = mid;
            start = mid + 1;
        }else{
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }

    return ans;
}