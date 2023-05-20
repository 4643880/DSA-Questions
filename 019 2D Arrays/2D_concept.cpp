


#include<iostream>
#include<limits.h>

using namespace std;


int main(){
    int arr[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    cout << "Output Row Wise" << endl;
    // printing row wise
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << "       " ;
        }
        cout << endl;
    }

    cout << "Output Column Wise" << endl;
    // printing Column wise
    // Inner loop is for column 
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[j][i] << "       " ;
        }
        cout << endl;
    }


    cout << "Last Column Print" << endl;
    // printing Last Column
    // Inner loop is for column 
    for(int i = 0; i < 4; i++){
        for(int j = 2; j < 3; j++){
            cout << arr[j][i] << "       " ;
        }
        cout << endl;
    }

    cout << "Last Row Print" << endl;
    // printing Last Row
    // Inner loop is for column 
    for(int i = 2; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << "       " ;
        }
        cout << endl;
    }

    

    return 0;
}