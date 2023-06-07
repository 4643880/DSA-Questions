

#include<iostream>


using namespace std;

int main(){

    int i = 5;

    int *ptr = &i;

    int **ptr2 = &ptr;

    cout << "Ptr pointer have this addresss: " << ptr << endl;
    cout << "Ptr addresss: " << &ptr << endl;
    cout << "Ptr value: " << *ptr << endl;
    cout << "Ptr2 has this address: " << *ptr2 << endl;
    cout << "Ptr2 has this value: " << **ptr2 << endl;

    cout << i << endl;
    cout << *ptr << endl;
    cout << **ptr2 << endl;

    cout << &i << endl;
    cout << ptr << endl;
    cout << *ptr2 << endl;

    return 0;
}

// 20:00