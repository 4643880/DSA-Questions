#include<iostream>

using namespace std;


void dummy(int n){
    n++;
    cout << "Value of n in Function is: " << n << endl;
}

int main(){
    // Copy creation is pass by value
    // n ki copy bnay gi dummy function main jo increment ho gi n ki copy ha replace nhi ho raha n
    int n = 15;
    dummy(n);
    cout << "Value of n is: " << n << endl;
    return 0;
}
