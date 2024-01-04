#include<iostream>
using namespace std;
#include<stack>

// String is abcdef => fedcba


int main(){
    // string str = "abcdef";
    string str = "aizaz";
    stack<char> st;

    // Step 1: will push all characters into the stack
    for(int i = 0; i < str.length(); i++){
        char ch = str[i];
        st.push(ch);
    }

    // Step 2: will pop the elements and store into string 
    string ans = "";
    while(!st.empty()){
        char ch = st.top();
        ans.push_back(ch);
        st.pop();
    }

    cout << "Ans is: " << ans << endl;




    return 0;
}


// 7:10