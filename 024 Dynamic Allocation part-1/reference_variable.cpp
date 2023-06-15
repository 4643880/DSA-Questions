
#include<iostream>


using namespace std;

int getSum(int *arr, int size){
        int temp = 0;
        for(int i = 0; i <= size ; i++){
            temp = temp + arr[i];
        }
        return temp;
}

// Return by reference BAD Practice
int& func(int d){
    int e = d;
    int &f = e;
    // f = f + 20;
    return f; 
}

// Return by pointer
int* func2(int d){
    int* ptr = &d;
    return ptr;
}

void update(int i){
    // Pass by value ha n copy create hoi ha 
    i++;
}

void update1(int& k){
    // Pass by value ha n copy create hoi ha 
    k++;
}

int main(){

    int i = 5;
    // Creating reference variable
    int &j = i;

    cout << i << endl;
    cout << j << endl;

    update(i);

    cout << i << endl;


    int k = 10;
    cout << k << endl;
    update1(k);
    cout << k << endl;


    int g = 20;
    cout << func(g) << endl;
    cout << g << endl;

   
    int h = 2;
    cout << func2(h) << endl;



    char ch = 'z';
    cout << ch << endl; // ch is one byte
    cout << sizeof(ch) << endl;

    char *ptr = &ch;
    cout << sizeof(ptr) << endl;


    cout << "Please enter the size of array" << endl;
    int myVar;
    cin >> myVar;

    // Dynamic Array in Heap Momory then storing in ptr that is in the stack memory.
    int *arr = new int[myVar];

    for(int i = 0; i < 5 ; i++){
        cin >> arr[i];
    }

    cout << "Printing output of array" << endl;
    for(int i = 0; i < 5 ; i++){
        cout << arr[i];
    }
    cout << endl;

    
    cout << "Sum is: " << getSum(arr, myVar) << endl;




    return 0;
}

