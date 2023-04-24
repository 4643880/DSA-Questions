#include<iostream>
#include<vector>
using namespace std;


int main(){    
    //===============================================================
    // Vector
    //===============================================================
    // it's similar to array but its dynamic if you have 4 value & want to put 5th then it's capacity will be increase to 8 automatically

    vector<int> v;

    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity : " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity : " <<  v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity : " << v.capacity() << endl;
    v.push_back(4);
    cout << "Capacity : " << v.capacity() << endl;
    v.push_back(5);
    cout << "Capacity : " << v.capacity() << endl;


    cout << "Element at index no 2 : "<< v.at(2) << endl;    
    cout << "First Element : "<< v.front() << endl;
    cout << "Last Element : "<< v.back() << endl;
    cout << "Size : "<< v.size() << endl;


    // pop_back back will remove last value
    cout << "Before POP: " << endl;
    for(int i = 0; i < v.size() ; i++){
        cout << v[i] << endl;
    }
    v.pop_back();
    cout << "After POP: " << endl;
    for(int i = 0; i < v.size() ; i++){
        cout << v[i] << endl;
    }


    // Capacity Before Clear of the Vector
    cout << "Capacity : "<< v.capacity() << endl;
    v.clear(); // will clear elements but will not clear capacity
    // Capacity After Clear of vector
    cout << "Capacity : "<< v.capacity() << endl;

    
    // creating vector size is 5 and initial value of elements is 9;
    vector<int> alpha(5,9);

    for(int i = 0; i < alpha.size() ; i++){
        cout << alpha[i] << endl;
    }

    // Assigning all values of vector alpha to vector bravo
    vector<int> bravo(alpha);

    for(int i = 0; i < bravo.size() ; i++){
        cout << bravo[i] << endl;
    }


    return 0;
}