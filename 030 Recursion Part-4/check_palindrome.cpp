

#include<iostream>
using namespace std;

bool checkPalindrome(string& str, int start, int end){
    if(start > end)
        return true;    

    if(str[start] != str[end]){
        return 0;
    }else{
        return checkPalindrome(str, start+1, end-1);
    }
}

int main() {

    string str = "abbccbba";

    bool ans = checkPalindrome(str, 0, str.length()-1);
    if(ans == 1){
        cout << "It's a palindrome string" << endl;
    }else{
        cout << "It's not a palindrome string" << endl;
    }
    return 0;
}