#include<iostream>
#include<queue>
using namespace std;


int main(){
    //===============================================================
    // Queue (first in, first out concept) 
    //===============================================================
    
    queue<string> q;

    q.push("ali");
    q.push("hassan");
    q.push("hussain");

    
    cout << "Top Element : "<< q.front() << endl;

    q.pop();

    cout << "Top Element : "<< q.front() << endl;


    cout << "Size : "<< q.size() << endl;





    return 0;
}