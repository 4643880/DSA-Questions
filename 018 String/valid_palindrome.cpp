#include<iostream>
#include<string>
#include<array>

using namespace std;

class Solution {
private: 
    bool validChar(char ch){
        if((ch >= 'a' && ch <= 'z') || ((ch >= 'A' && ch <= 'Z')) || (ch >= '0' && ch <= '9' )){
            return true;
        }
        else{
            return false;
        }
    }

private:
    char toLowerCase(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
            return ch;
        }else{
            char tempChar = (ch - 'A') + 'a';
            return tempChar;
        }
    }
public:
    bool isPalindrome(string s) {        
        // Remove extra characters means except a-z 0-9
        string temp = "";
        for(int i = 0; i < s.length() ; i++){
            if(validChar(s[i]) == true){
                temp.push_back(s[i]);
            }
        } 
        // cout << temp << endl;
        int start = 0;
        int end = temp.length()-1;
        // cout << "start: "<< toLowerCase(temp[start]) << endl;
        // cout << "last: "<< toLowerCase(temp[end]) << endl;
        while(start < end){
            if(toLowerCase(temp[start]) == toLowerCase(temp[end])){
                // cout << temp[start];
                // cout << temp[end];
                start++;
                end--;
            }else{
                return false;
            }
        }
        return true;

    }
};