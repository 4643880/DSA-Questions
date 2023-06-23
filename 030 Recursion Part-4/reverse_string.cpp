

#include<iostream>
using namespace std;

void reverseString(string& str, int start, int end){
    cout << str << endl;
    // Base Case
    if(start > end){
        return;
    }

    swap(str[start], str[end]);
    start++;
    end--;

    // Recursive Call
    reverseString(str, start, end);
}

int main(){
    string str = "aizaz";
    int start = 0;
    int end = str.length() -1;
    
    cout << str << endl;
    reverseString(str, start, end);
    cout << str << endl;

    return 0;
}