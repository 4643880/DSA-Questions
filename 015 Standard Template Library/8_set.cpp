#include<iostream>
#include<set>
using namespace std;


int main(){
    //===============================================================
    // Set ( stores unique values can't store 5 to 5 times will only store once)
    //===============================================================
    
    set<int> s;
    s.insert(1);
    s.insert(6);
    s.insert(2);
    s.insert(6);
    s.insert(9);
    s.insert(1);

    // Returns sorted values and only unique
    for(auto i : s){
        cout << i;
    }cout << endl;

    s.erase(s.begin());// will remove first index from set
    s.erase(6); // will remove  6 from set 

    for(auto i : s){        
        cout << i;
    } cout << endl;

    cout << "true = 1 , false = 0 Will find value : " << s.count(12) << endl;


    return 0;
}