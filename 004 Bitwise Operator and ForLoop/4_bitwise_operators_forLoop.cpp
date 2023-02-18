#include <iostream>

using namespace std;

int main()
{

    /*
    int a = 4;
    int b = 6;

    // Bitwise Operators
    cout << " A & B: " <<  (a&b) << endl;
    cout << " A | B: " <<  (a|b) << endl;
    cout << " ~A: " <<  (~a) << endl;
    cout << " A ^ B: " <<  (a^b) << endl;

    // Left shift and Right Shift
    cout << (17 >> 2) << endl;
    cout << (15 << 1) << endl;

    // Pre & Post Increment & Decrement
    int z = 10;
    int i = 5;
    // i = 5 first using then will increment
    cout << z +(i++) << endl; // i = 6
    cout << z + ++i << endl; // i = 7
    */






   /*
    int n;
    cout << "Enter the Value: " << endl;
    cin >> n;

    cout << "Printing Count From 1 to N" << endl;

    int i = 1;
    for (;;)
    {
        if (i <= n)
        {
            cout << i << endl;
        }
        else
        {
            break;
        }
        i++;
    }
   */




    /*
    for(int a = 1, b = 1 ; a<=n , b<=n ; a++, b++){
        cout << " Value of A: " << a << " Value of B: " << b << endl;
    }
    */


    /*
        // Sum of 1 to N
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n ; i++){
        sum = sum + i;
    }
    cout << sum << endl;
    */


    /*
    // Fabonacci Series
    int n;
    cin >> n;

    int a = 0;
    int b = 1;

    cout << a << " ";
    cout << b << " ";
    for(int i = 1; i <= n ; i++){
        int nextNum = a + b;
        cout << nextNum << " ";
        a = b;
        b = nextNum;        
    }
    */



   // Checking n is prime or not
    int n;
    cin >> n;

    for(int i = 2 ; i <= n-1 ; i++){
        if(n%i == 0){
            cout << "Not Prime No";
            break;
        }else{
            cout << "Prime No";
            break;
        }

    }
    
}