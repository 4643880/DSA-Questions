
#include<iostream>
#include<vector>

using namespace std;



class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // 1: Starting Row
        // 2: Ending Column
        // 3: Ending Row
        // 4: Starting Column

        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = row*col;

        // Index Initialization
        int starting_row = 0;
        int starting_col = 0;
        int ending_row = row-1;
        int ending_col = col-1;

        vector<int> ans;
        // 0 < 9 or 12 depends on matrix
        while(count < total){
            
            // Add this condition in all loops => count < total &&
            // Just focus that where you are iterating, in the row or in the col
            // print starting row
            for(int index = starting_col; count < total && index <= ending_col; index++){
                ans.push_back(matrix[starting_row][index]);
                count++;
            }
            starting_row++;

            // printing ending col
            for(int index = starting_row; count < total && index <= ending_row ; index++){
                ans.push_back(matrix[index][ending_col]);
                count++;
            }
            ending_col--;

            // printing ending row
            for(int index = ending_col ; count < total && index >= starting_col; index--){
                ans.push_back(matrix[ending_row][index]);
                count++;
            }
            ending_row--;

            // printing starting col
            for(int index = ending_row ; count < total && index >= starting_row; index--){
                ans.push_back(matrix[index][starting_col]);
                count++;
            }
            starting_col++;


        }
        return ans;
    }
};