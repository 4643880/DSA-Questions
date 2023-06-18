


#include<iostream>
using namespace std;


int power(int n){
    // Base Case
    // Base Case e.g 2^0 = 1
    if(n == 0){
        return 1;
    }

    // Recursive Relation
    int smallProblem = power(n-1);
    int bigProblem = 2 * smallProblem;

    return bigProblem;

}

int main(){

    int n;
    cin >> n;

    int ans = power(n);

    cout << ans << endl;

    return 0;
}

