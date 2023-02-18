
#include<iostream>

using namespace std;

int main(){
    



    /* 

    // ===================================
            // Sum 1 - N => 1+2+3+4+5
    // ===================================
    int n;
    cin >> n;

    int i = 1;   
    int sum = 0; 
    while(i <= n){
        cout << i << endl;
        sum = sum + i;
        i = i + 1;     
    }
    cout << "Total sum is : " << sum << endl;
    */


    // ===================================
            // Check N is prime or not
    // ===================================
    // HINT 2--(n-1) (% != 0)

    /*
    int n;
    cin >> n;

    int i = 2;   
    while(i <= n-1){
        // cout << i << endl;
        if(n%i == 0){
            cout << "Not Prime" << endl;
            break;
        }
        if(i != 0){
            cout << "Prime Number" << endl;
            break;
        }
        i = i + 1;     
    }   
    */



    // ===================================
            // Pattern No 1
    // ===================================
// * * * * 
// * * * *
// * * * *
// * * * *

    /*
    int n;
    cin >> n;

    int i = 1;   
    while(i <= n){
        // cout << i << endl; 
        int j = 1;
        while(j <= n){
            cout << "* ";  
            j = j + 1;
        }
        cout << endl;

        i = i + 1;
    }    
    */
 
   

    // ===================================
            // Pattern No 2
    // ===================================
// 1 1 1
// 2 2 2
// 3 3 3

    /*
    int n;
    cin >> n;

    int i = 1;   
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << " " << i;
            j++;
        }
        cout << endl;
        i++;       
    } 
    */
   

    


}