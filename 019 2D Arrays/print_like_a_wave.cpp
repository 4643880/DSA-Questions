
#include<iostream>
#include<vector>

using namespace std;



vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    // Whenever index is odd go, bottom to top, and whenever index is evern, then go top to bottom
    vector<int> ans;
    for(int col = 0; col < mCols; col++){

        // col&1 == true odd index then go Bottom to top
        // col&1 == false then go top to bottom
        // 1&1 => 1

        if(col&1 == true){  
            for(int row = nRows-1; row >= 0 ; row--){
                // cout << arr[row][col];
                ans.push_back(arr[row][col]);
            }
            
        }else{
            for(int row = 0; row < nRows ; row++){
            //   cout << arr[row][col]; 
              ans.push_back(arr[row][col]);
            }

        } 


        // Print 2D array column wise
        // for(int row = 0; row < nRows ; row++){
        //     cout << arr[row][col] << " ";
        // }      
        // cout << endl;

        
    }
    return ans;

}