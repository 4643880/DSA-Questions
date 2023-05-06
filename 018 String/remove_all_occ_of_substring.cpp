#include<iostream>
#include<string>

using namespace std;



class Solution {
public:
    string removeOccurrences(string s, string part) {
        // Getting the index no, where the particular part exists using find() function
        // cout << s.find(part) << endl;
        // cout << s.length() << endl;
        // cout << part.length() << endl;
        // e.g 2 < 12
        while(s.find(part) < s.length()){
            // erase from index no 2 : next 3 character 
            s.erase(s.find(part), part.length());
        }
        return s;
         
    }
};