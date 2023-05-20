

#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        // Just view this 2D array as Linear values are contigious
        int start = 0;
        int end = row * col -1;
        int mid = start + (end -start) /2;

        while(start <= end){
            // e.g I want to find 16 that is at the six index number & size of col is 4
            // row => 6/4= 1
            // col => 6%4 = 2
            int element = matrix[mid/col][mid%col];

            if(target == element){
                return true;
            }
            if(target > element){
                start = mid + 1;
            }
            else{
                end = mid -1;
            }
            mid = start + (end -start) /2;
        }
        return false;
    }
};