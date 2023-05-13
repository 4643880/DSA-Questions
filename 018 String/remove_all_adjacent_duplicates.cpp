#include<iostream>
#include<stack>
#include<string>
using namespace std;


class Solution {
public:
    string removeDuplicates(string s) {
        // Example of Stack

        // stack<char> st;
        // st.push('a');
        // st.push('b');
        // st.push('c');

        // cout << st.size() << endl;

        // int stackSize = st.size();
        // for(int i = 0; i < stackSize; i++){
        //     cout << st.top() << endl;
        //     st.pop();
        // }
        
        // while(st.size() != 0){
        //     cout << st.top() << endl;
        //     st.pop();
        // }


        // Question Starts Here
        stack<char> st;
        int stringSize = s.size();
        // cout << stringSize << endl;
        for(int i = 0; i < stringSize; i++){
            if(st.size() == 0){
                st.push(s[i]);
            }
            else if(s[i] == st.top()){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        // cout << stringSize << endl;

        string ans = "";
        while(st.size() != 0){
            char topElement = st.top();
            st.pop();          

            ans += topElement;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};