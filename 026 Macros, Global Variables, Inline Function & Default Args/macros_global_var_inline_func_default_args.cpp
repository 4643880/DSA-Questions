
#include<iostream>
using namespace std;


// Defining Macro
// Code Compile honay say pahlay value assign ho jay gi macro jaha jaha use ho raha ho ga
// Extra storage bhe nhi macro lay ga jiss tarha int variable 4 byte layta ha
#define PI 3.14


int score = 20;

void a(int& n){
    cout << n << endl;
    cout << "Score in a " << score << endl;
    score++; // Any Function Can update the value of global variablex
}
void b(int& n){
    cout << n << endl;
    cout << "Score in b " << score << endl;
    // Any function can update the global function
}

// inline function will be call before the compilation of the code just like macro
// normal func jab call hota ha 10 dafa to 10 time stack ki form main memory use karta ha but it uses only once
// No Extra memory usage
inline int getMax(int& a, int& b){
    return a > b ? a : b;
}


void printArray(int arr[], int n, int start = 0){
    for(int i = start ; i < n ; i++){
            cout << arr[i] << endl;
    }
}

int main(){

    int r = 5;
    // double pi = 3.14;
    double area = PI * r * r;
 
    cout << "Area is: " << area << endl;


    int myVar = 10;
    a(myVar);
    b(myVar);

    cout << "Score in main " << score << endl;


    // ================== INLINE Function ==========================
    int a = 1, b = 2;

    int ans = 0;

    ans = getMax(a,b);
    cout << "Ans is: " << ans << endl;

    a = a+2;
    b = b+1;

    ans = getMax(a,b);
    cout << "Ans is: " << ans << endl;

    // ================== Default Args ==========================

    int alpha[5] = {1,2,3,4,5};

    printArray(alpha, 5, 3);
    printArray(alpha, 5);





    return 0;
}

