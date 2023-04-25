#include<iostream>
#include<list>
using namespace std;


int main(){
    //===============================================================
    // List 
    //===============================================================
    // can't access elements with [i] that's why using range based loop
    list<int> l1;
    l1.push_back(1);
    l1.push_front(2);

    for(auto i:l1){
        cout << i << endl;
    }

    // Erasing List
    l1.erase(l1.begin(), l1.end());

    for(auto i:l1){
        cout << i << endl;
    }


    // Assigning all values of list 1 to list 2
    list<int> l2(l1);

    for(auto i:l2){
        cout << i << endl;
    }



    return 0;
}