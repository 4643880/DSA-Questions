

#include<iostream>

using namespace std;


int power(int a , int b){
    // Base Case
    if(b == 0){
        return 1;
    }

    if(b == 1){ // 2^1 
        return a;
    }

    // Recursive call
    // if is is evern a^b/2 * a^b/2 if is odd a * a^b/2 * a^b/2

    int ans = power(a, b/2); // a^b/2
    // if b is even 
    if(b%2 == 0){
        // ans is equal to a^b/2 so ans * ans will be equal to a^b/2 & a^b/2
        return ans * ans;
    }else{
        return a * ans * ans;
    }

    
}

int main(){

    int a,b;
    cin >> a >> b;
    
    
    int ans = power(a , b);
    cout << "Ans is: " << ans << endl;

    return 0;
}