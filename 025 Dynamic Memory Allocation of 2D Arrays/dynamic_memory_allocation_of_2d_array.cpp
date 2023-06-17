

#include<iostream>
using namespace std;



int main(){

    // Dynamic Memory Allocation of 2D Arrays
    int row;
    cin >> row;

    int col; 
    cin >> col;

    int *oneDArray = new int[row]; // 1D Array Dynamically

    int **arr = new int * [row]; // 2D Array Dynamically

    // Creation of 2D Array in Heap Memory instead of Stack Memory
    for(int i = 0; i < row; i++){
        arr[i] = new int[col];
    } // Creation Done

    // Taking Input 
    for(int i = 0; i < row; i++){        
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    } 

    // Printing Output 
    for(int i = 0; i < row; i++){        
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << "  " ;
        }
        cout << endl;
    } 


    // Releasing Heap Memory
    for(int i = 0; i < row; i++){
        delete [] arr[i];
    }

    delete []arr;



    return 0;
}

