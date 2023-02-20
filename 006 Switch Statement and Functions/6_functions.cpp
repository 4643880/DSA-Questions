#include<iostream>

using namespace std;

void pow(int a, int b){
    int z = a;
    for(int i = 1; i != b; i++){
        a = a * z;
    }
    cout << "Power ka Result ha "<< a << endl;
}


void isEvenOrOdd(int a){
    if(a%2 == 0){
        cout << "This is Even Number " << a << endl;
    }else{
        cout << "This is Odd Number " << a << endl;
    }
}

int factorial(int a){
    // Formual 5! = 5 * 4 * 3 * 2 * 1 ans 120
    int ans = 1; 
    for(int i = 1; i <= a; i ++){
        ans = i * ans;
    }
    return ans;
}

void nCr(int n, int r){
    // n! / r! * (n-r)!
    // Lecture 8 47 min

    // 8C2 = 8! / 2! * (8-2)!
    
    int k = n-r;
    int answer = factorial(n) / (factorial(r) * factorial(k));
    
    cout << "Result of Factorial is: " << answer << endl;
}


void isPrime(int n){
    cout << endl;
    for(int i = 2; i <= n-1; i++){
        if(n%i != 0){
            cout << "It's a prime number " << n << endl;
            break;
        }else{
            cout << "It's not a prime number " << n << endl;
            break;
        }
    }
}

int main(){
    // pow(a,b) means 2 power 3 if a = 2 and b = 3

    // Created Power Calculator
    pow(2,5);
    pow(12,2);

    // Checking value is odd or even
    isEvenOrOdd(37);

    // Created Combination Calculator
    nCr(7,4);

    // Created Factorial Calculator
    cout << "Facotorial of 5 is: " << factorial(5);

    // Checking value is prime or not
    isPrime(17);
    return 0;
}
