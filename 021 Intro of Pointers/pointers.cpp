

#include<iostream>

using namespace std;


int main(){

    int num = 5;
    cout << "Value of Num Variable is: "<< num << endl;

    // Address of Operator &
    cout << "Address of num is: " << &num << endl;

    int *ptr = &num;

    double num2 = 12.5;
    double *ptr2 = &num2;

    cout << "Printing Pointer Value ptr: " << *ptr << endl;
    cout << "Printing Pointer Address ptr: " << ptr << endl;
    cout << "Printing size of num: " << sizeof(num) << endl;
    cout << "Printing size of ptr2: " << sizeof(ptr2) << endl;


   
    int *p = &num;
    cout << "Result: " << *p * 2 << endl;


    // Copying a pointer
    int *q = &num;
    int *r = q;

    cout << "*q: " << *q << " *r: " << *r << endl; 
    

    // Important concept
    int i = 3;
    int *t = &i;

    cout << "Before 1 T: " << *t << endl;
    *t = *t + 1;
    cout << "After 1 T: " << *t << endl;

    cout << "Before 2 Address of T: " << t << endl;
    t = t + 1;
    cout << "After 2 Address of T: " << t << endl;
    // address will be increase of bytes e.g int is 4 byte then t = t+1 means 4 + 4 = 8 byte



    return 0;
}