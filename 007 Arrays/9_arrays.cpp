#include<iostream>

using namespace std;

void printArray(int getArrayName[], int size){
    for(int i = 0; i < size ; i++){
        cout << getArrayName[i] << endl;
    }
}

int main(){
    // Declaration 
    // It has 10 garbage values
    // int number[10];
    // cout << number[0] << endl;



    // int myArray[5] = {1,2,3,55,66};
    // cout << myArray[4] << endl;




    // int mySecondArray[] = {44,55,66,77};
    // for(int i: mySecondArray){
    //     cout << i << endl;
    // }



    // int myThirdArray[] = {44,55,66,77};
    // for(int i=0; i <= sizeof(myThirdArray) ; i++){
    //     cout << i << endl;
    // }



    int myFourthArray[4] = {44,55,66,77};
    int size = sizeof(myFourthArray) / sizeof(int);
    printArray(myFourthArray, size);
    
    cout << "Size of Fouth Array is: " << sizeof(myFourthArray) << endl;
    cout << "Size of Fouth int is: " << sizeof(int) << endl;

    return 0;
}