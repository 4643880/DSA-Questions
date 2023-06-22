


#include<iostream>
using namespace std;

bool linearSearchElement(int arr[], int n, int key){
    // Base Case
    if(n == 0){
        return 0;
    }

    if(arr[0] == key){
        return 1;
    }else{
        bool remainingPart = linearSearchElement(arr + 1,  n-1, key);
        return remainingPart;
    }
    
}

int main(){

    int arr[7] = {9,10,18,11,4,2,19};

    bool result = linearSearchElement(arr, 7, 20);

    if(result == true){
        cout << "Key is present" << endl;
    }else{
        cout << "Key is not present" << endl;
    }
    return 0;
}