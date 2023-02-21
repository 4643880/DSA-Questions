#include<iostream>
using namespace std;

// Variable kay case main hum copy creation hota ha means pass by value if we update the value of variable in any function

// While in the Array we assign memory address or base address or starting address to update function that's why copy creation nhi hoti

void update(int arr[], int n) {
    

    cout << endl << "Inside the function" <<endl;
    
    //updating array's first element
    arr[0] = 120;

    //printing the array
    for(int i=0; i<n; i++) {
        cout << arr[i] <<" ";
    } 
    cout<<endl;


    cout << "Going back to main function" << endl;
}


int main() {

    int arr[3] = {1,2,3};

    update(arr, 3);

    //printing the array
    cout<< endl << "Printing in main function" << endl;
    for(int i=0; i<3; i++) {
        cout << arr[i] <<" ";
    }
    cout << endl;

    return 0;
}