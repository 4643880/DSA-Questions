#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // Creating temporary vector 
        vector<int> temp(nums.size());

        for(int i= 0; i < nums.size() ; i++){
            // Formula to rotate an array
            // (i + k) % n 
            // While i = index, k = how many steps should forward , n = size of array

            // Assigning values in the temporary vector after calculating the index according to formula
            temp[(i+k) % nums.size()] = nums[i];
        }

        // Copying temp vector into nums vector
        nums = temp;
    }
};