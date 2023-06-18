


#include<iostream>
using namespace std;


int factorial(int n){
    // Base Case
    // Base Case e.g 2^0 = 1
    if(n == 0){
        return 1;
    }

    // Recursive Relation
    int smallProblem = factorial(n-1);
    int bigProblem = n * factorial(n-1);

    return bigProblem;
}

int main(){

    int n;
    cin >> n;

    int ans = factorial(n);

    cout << ans << endl;

    return 0;
}

