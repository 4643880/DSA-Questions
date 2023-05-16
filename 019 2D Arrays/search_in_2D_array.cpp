
#include<iostream>

using namespace std;

bool isPresent(int arr[3][4], int target, int rowSize, int colSize){
    for(int i = 0; i < rowSize; i++){
        for( int j=0; j < colSize; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[3][4];
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr[3][4] = {{9,10,11,12},{5,6,7,8},{1,2,3,4}};

    // taking input for row
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Please Enter the element to search" << endl;
    int target;
    cin >> target;

    if(isPresent(arr,target,3,4)){
        cout << "Element Found" << endl;
    }else{
        cout << "Element Not Fount" << endl;
    }

    // taking input for column
    // for(int i = 0; i < 4; i++){
    //     for(int j = 0; j < 3; j++){
    //         cin >> arr[j][i];
    //     }
    // }

    // printing output
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << "   ";
        }
        cout << endl;
    }
    
    return 0;
}