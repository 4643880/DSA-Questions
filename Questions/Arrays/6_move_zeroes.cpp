#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {    
        // Shifting all non zeros elements at the left size
        int nonZeroIndex = 0;
        for(int j = 0; j < nums.size(); j++){
            // if value is not equal to zero then swap
            if(nums[j] != 0){
                swap(nums[j], nums[nonZeroIndex]);
                nonZeroIndex++;
            }
        }
    }
};