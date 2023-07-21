#include<iostream>
#include<vector>
#include<array>
#include <limits>
#include <algorithm>
using namespace std;

class Solution{
    private: 
        bool isSafe(int newSrcx, int newSrcy, vector<vector<int>>& m, int n,vector<vector<int>>& visited ){
            if((newSrcx >= 0 && newSrcx < n) && (newSrcy >= 0 && newSrcy < n) && m[newSrcx][newSrcy] == 1 &&  visited[newSrcx][newSrcy] == 0){
                return true;
            }else{
                return false;
            }
        }     
        
    private:        
        void solve(vector<vector<int>>& m, int n,vector<string>& ans, int srcx, int srcy,vector<vector<int>>& visited, string path ){
            
            // Base Case
            if(srcx == n-1 && srcy == n-1){
                ans.push_back(path);
                return;
            }
            
            visited[srcx][srcy] = 1;
            
            // 4 choices D, L, R, U
            // Down
            int newSrcx = srcx + 1;
            int newSrcy = srcy;
            if(isSafe(newSrcx, newSrcy, m, n, visited)){
                path.push_back('D');
                solve(m,n,ans,newSrcx,newSrcy,visited,path);
                path.pop_back(); // back track
            }
            
            // Left
            newSrcx = srcx;
            newSrcy = srcy - 1;
            if(isSafe(newSrcx, newSrcy, m, n, visited)){
                path.push_back('L');
                solve(m,n,ans,newSrcx,newSrcy,visited,path);
                path.pop_back(); // back track
            }
            
            
            // Right
            newSrcx = srcx;
            newSrcy = srcy + 1;
            if(isSafe(newSrcx, newSrcy, m, n, visited)){
                path.push_back('R');
                solve(m,n,ans,newSrcx,newSrcy,visited,path);
                path.pop_back(); // back track
            }
            
            // Up
            newSrcx = srcx - 1;
            newSrcy = srcy;
            if(isSafe(newSrcx, newSrcy, m, n, visited)){
                path.push_back('U');
                solve(m,n,ans,newSrcx,newSrcy,visited,path);
                path.pop_back(); // back track
            }
            
            visited[srcx][srcy] = 0; // back track
            
        }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {        
        
        vector<string> ans;
        int srcx = 0;
        int srcy = 0;        
        
        // Optional condition
        if(m[0][0] == 0){
            return ans; // return empty array
        }        
        
        // Creating a visited vector of vectory & initializing it with zero
        vector<vector<int>> visited = m;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n ;j++){
                visited[i][j] = 0;
                // cout << visited[i][j] << endl; // printing for testing
            }
        }
        
        // Creating a visited vector of vector & initializing it with zero
        // vector<vector<int>> visited(n, vector<int>(n, 0));
        
        string path = "";
        
        solve(m, n, ans, srcx, srcy, visited, path);
        sort(ans.begin(), ans.end());
        return ans;
    }
};