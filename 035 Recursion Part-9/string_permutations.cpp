

#include<iostream>
#include<vector>

using namespace std;


class Solution {
private:
    void solve(vector<int> nums, vector<vector<int>>& ans , int index){

        // Base Case
        if(index >= nums.size()){
            ans.push_back(nums);
            return;
        }


        for(int j = index; j < nums.size(); j++){
            swap(nums[index], nums[j] );
            solve(nums, ans, index+1);
            // Back Track
            /// After storing the ans I have to swap again because i did the changes in the origional vector, 
            swap(nums[index], nums[j] );
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, ans, index);
        return ans;
    }
};