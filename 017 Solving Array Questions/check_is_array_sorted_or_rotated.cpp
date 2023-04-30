#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    bool check(vector<int>& nums) {
        // problem statement is check is array sorted or rotated check one of both conditions then return true
        int count = 0;
        int n = nums.size();

        // Checking is it rotated, only if it has one break
        // e.g 3,4,5,1,2  1st break is 5 > 1 it means if array breaks only once then its rotated
        // e.g 3,4,5,2,1 1st break is 5 > 2 then second break is 2 < 1 it means it's not rotated and sorted
        for(int i = 1; i < nums.size(); i++){
            // if it has only one break then it's rotated
            if(nums[i-1] > nums[i]){
                count++;
            }             
        }
        // Checking is any array already have values in sorted order
        // e.g [1,2,3,4] => 4 > 1
        if(nums[n-1] > nums[0]){
            count++;
        }
        // why <= using instead of == 1 because if i get input 1,1,1 then how will i calculate either it's sorted or not or rotated or not          
        if(count <= 1){
            return true;
        }else{
            return false;
        }
    }
};