

#include<iostream>


using namespace std;

void update(int **ptr2){


    // ptr2 = ptr2 + 1;    // Kuch change nhi howa Outside of function because wrong address ko increase kia ha
    // cout << "alpha: " << ptr2 << endl;


    // *ptr2 = *ptr2 + 1; // Change howa ha Outside of function because address ko increase kia ha

    **ptr2 = **ptr2 + 1; // Change howa ha Outside of function because value ko increase kia ha

    
}

int main(){

    int i = 5;

    int *ptr = &i;

    int **ptr2 = &ptr;
    /*
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
    */

    cout << "==========================" << endl;
    cout << *ptr << endl;
    // Before Update
    cout << "Before Valeus: " << i << endl;
    cout << "Before Valeus: " << ptr << endl;
    cout << "Before Valeus: " << ptr2 << endl;

    update(ptr2);
    // After Update
    cout << "After Values: " << i << endl;
    cout << "After Values: " << ptr << endl;
    cout << "After Values: " << ptr2 << endl;


    return 0;
}

