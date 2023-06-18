
#include<iostream>
using namespace std;


int printCounting(int n){
    // Base Case
    if(n==0){
        return 1;
    }
    // Tail Recursion
    // cout << n << endl;

    // Recursive Relation
    printCounting(n-1);

    // Head Recursion
    cout << n << endl;
    
}

int main(){

    int n;
    cin >> n;

    printCounting(n);

    return 0;
}

