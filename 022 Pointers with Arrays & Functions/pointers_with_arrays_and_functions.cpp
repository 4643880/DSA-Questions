


#include<iostream>

using namespace std;

void printFunc(int *p) {
    cout << *p << endl;
}

void updateFunc(int *p){
    p = p + 1;
    cout << "pass by value updated: " << p << endl;
}

int getSum(int *arr, int n){
    cout << "Real Size will be of the pointer: " <<sizeof(arr) << endl;

    int sum = 0;
    for(int i = 0; i < n ; i++){
        sum = sum + arr[i];
    }

    return sum;
}

int main() {

    int arr[4] = {1,2,3,4};


    cout << "Address of Frist Index of the Array is: " << &arr[0] << endl;
    cout << "Address of Second Index of the Array is: " << &arr[1] << endl;


    cout << "Value at 2nd location: " << *arr + 1 << endl;
    cout << "Value at 3rd location: " << (*arr) + 2 << endl;
    

    int temp[10];

    cout << "Size of Temp is: " << sizeof(temp) << endl;
    int *ptr = &arr[1]; 
    cout << *ptr << endl;


    int arrSecond[10] = {1,2,3,4,5}; 
    cout << "Address of: 1st: " << &arrSecond[0] << endl; 
    int *myPtr = &arrSecond[0];

    cout << "alpha: "<< myPtr << endl;
    cout << "bravo: "<< *myPtr << endl;
    cout << "charlie: " << &myPtr << endl;


    int thrirdArr[10] = {1,2,3,4,5};
    int *thirdPtr = &arr[0];
    cout << "Address before: " << thirdPtr << endl;
    // address will be increase of bytes e.g int is 4 byte then t = t+1 means 8 + 4 = c byte because hexa is 
    // 0-9 then a-f
    thirdPtr = thirdPtr + 1;
    cout << "Address after: " << thirdPtr << endl;


    // -===================================================
    //  Character Arrays with pointers
    // -===================================================

    int arr1[5] = {1,2,3,4,5};
    char arr2[6] = "abcde";

    cout << arr1 << endl;
    cout << arr2 << endl;

    char *c = &arr2[0];
    cout << "1st -> " << c << endl;
    cout << "1st -> " << *c << endl;


    // -===================================================
    //  Functions with pointers
    // -===================================================

    int value = 5;
    int *valuePointer = &value;
    // Calling Function
    printFunc(valuePointer);

    cout << "pass by value before: " << valuePointer << endl;
    updateFunc(valuePointer);
    cout << "pass by value after: " << valuePointer << endl;


    int newArr[5] = {1,2,3,4,5};

    cout << "Sum is: " <<  getSum(newArr, 5) << endl;


    return 0;
}

// 22:20