#include<iostream>
#include<deque>
using namespace std;


int main(){
    //===============================================================
    // Deque 
    //===============================================================
    // can perform deletion and insertion and both corners(font , end)
    deque<int>  d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    d.push_back(17);
    d.push_front(18);

    cout << "Element at index no 2 : "<< d.at(2) << endl;    
    cout << "First Element : "<< d.front() << endl;
    cout << "Last Element : "<< d.back() << endl;
    cout << "Size : "<< d.size() << endl;

    cout << "Before POP: " << endl;
    for(int i = 0; i < d.size() ; i++){
        cout << d[i] << endl;
    }

    d.pop_front();
    d.pop_back();

    cout << "After POP: " << endl;
    for(int i = 0; i < d.size() ; i++){
        cout << d[i] << endl;
    }

    cout << "Delete between range : " << endl;
    d.erase(d.begin(), d.begin() + 2);
    for(int i = 0; i < d.size() ; i++){
        cout << d[i] << endl;
    }



    return 0;
}