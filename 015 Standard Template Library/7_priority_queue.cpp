#include<iostream>
#include<queue>
using namespace std;


int main(){
    //===============================================================
    // Priority Queue  (Max Heap & Min Heap Concept)
    //===============================================================
    
    // Max Heap (when we'll fetch value we'll get max value)
    priority_queue<int> pqMax;

    // Min Heap (when we'll fetch value we'll get min value)
    priority_queue<int, vector<int>, greater<int> > pqMin;

    pqMax.push(1);
    pqMax.push(75);
    pqMax.push(8);

    pqMin.push(16);
    pqMin.push(24);
    pqMin.push(32);    

    
    cout << "Top Element of Max Heap: "<< pqMax.top() << endl;
    cout << "Top Element of Min Heap: "<< pqMin.top() << endl;

    int n1 = pqMax.size();
    for(int i = 0 ; i < n1 ; i++){
        cout << pqMax.top() << endl;
        pqMax.pop();        
    }

    int n2 = pqMin.size();
    for(int i = 0 ; i < n2 ; i++){
        cout << pqMin.top() << endl;
        pqMin.pop();
    }



    return 0;
}