#include<iostream>
#include<string>
#include<vector>

using namespace std;



class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        // cout << s1.size() << endl;
        // cout << s1.length() << endl;
        if(m < n){
            return false;
        }
        vector<int> freq1(26,0), freq2(26,0);

        // Updating Frequency of s1
        for(int i =0; i < n ; i++){
            // b - a => 66 - 65 => 1
            int number = s1[i] - 'a';
            freq1[number]++;
        }
        // Updating Frequency of s2 according to window size that is s1.size();
        // running for first window
        for(int i =0; i < n ; i++){
            // b - a => 66 - 65 => 1
            int number = s2[i] - 'a';
            freq2[number]++;
        }

        // comparing freq 1 with freq 2 for first window
        if(freq1 == freq2){
            return true;
        }

        // running for remaining windows
        // e.g 2 < 8
        for(int window_end = n; window_end < m; window_end++){            
            // Adding new character
            char newchar = s2[window_end];
            // b - a => 66 - 65 => 1
            int number1 = newchar - 'a';
            freq2[number1]++;

            // Removing Old first character 
            char oldChar = s2[window_end - n]  ;
            int number2 = oldChar - 'a';
            // freq2[index no 3 - s1 length that's 2]--
            freq2[number2]--;

            // comparing freq 1 with freq 2 for remaining windows
            if(freq1 == freq2){
                return true;
            }
        }
    
    return false;
    }
};