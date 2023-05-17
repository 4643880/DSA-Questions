
#include<iostream>
#include<limits.h>

using namespace std;

void rowWiseSum(int arr[3][4], int rowSize, int colSize){
    int ans = 0;
    for(int i =0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            ans += arr[i][j];
        }
        cout << ans << "  ";
    }
    cout << endl;
}

void findLargestRowSum(int arr[3][4], int rowSize, int colSize){

    int rowIndex = -1;
    int ans = 0;
    int maxi = INT_MIN;
    for(int i =0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            ans += arr[i][j];
        }
        cout << ans << "  ";
        if(ans > maxi){
            maxi = ans;
            rowIndex = i;
        }
    }

    cout << "Maximum Number is: " << maxi << " and Row Index is: " << rowIndex << endl;
}

int main(){
    int arr[3][4];

    cout << "Please Enter the Elements" << endl;
    // Taking input for row
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Printing the Sum" << endl;
    rowWiseSum(arr,3,4);

    cout << "Printing the Largest Sum of Row" << endl;
    findLargestRowSum(arr,3,4);

    cout << "Printing the Array" << endl;

    // printing output
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << "   ";
        }
        cout << endl;
    }
    
    return 0;
}