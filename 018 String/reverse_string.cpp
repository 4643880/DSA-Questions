#include<iostream>
#include<vector>

using namespace std;


void reverse(vector<char>& s, int n){
    int start = 0;
    int end = n-1;
    
    while(start < end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
}

class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s,s.size());
    }
};