

#include<iostream>
using namespace std;

int getSum(int arr[], int n){
    // Base Case
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return arr[0];
    }

    // Recursive Relation
    int remainingPart = getSum(arr + 1 , n -1);
    int sum = arr[0] + remainingPart;
    return sum;
}

int main(){
    int arr[5] = {2,3,4,1,7};

    cout << "Sum is: " << getSum(arr, 5);
    return 0;
}