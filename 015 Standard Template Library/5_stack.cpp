#include<iostream>
#include<stack>
using namespace std;


int main(){
    //===============================================================
    // Stack (last in, first out concept) 
    //===============================================================
    
    stack<string> s;

    s.push("ali");
    s.push("hassan");
    s.push("hussain");

    
    cout << "Top Element : "<< s.top() << endl;

    s.pop();

    cout << "Top Element : "<< s.top() << endl;


    cout << "Size : "<< s.size() << endl;





    return 0;
}