

#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i < n;i++ ){
        if(i%2 != 0){
            return true;
        }
    }
    return false;
}

int main(){
    cout << "Enter a number" << endl;

    int n;
    cin >> n;

    if(isPrime(n) == true){
        cout << "It's a prime number" << endl;
    }else{
        cout << "It's not a prime number" << endl;
    }
    return 0;
}