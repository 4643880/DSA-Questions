#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int arrayName[], int size){
    int maxValue = INT_MIN; // Default value is minimum of integer  
    
    for(int i = 0; i < size; i++){     
        // First Method
        maxValue = max(maxValue, arrayName[i]);

        // Second Method
        // if(arrayName[i] > maxValue){
        //     maxValue = arrayName[i];            
        // }
    }
    cout << "Max Value is : " << maxValue << endl; 
}

int getMin(int arrayName[], int size){
    int minValue = INT_MAX; // Default value is Maximum of integer  

    for(int i = 0; i < size; i++){

        // First Method
        // minValue = min(minValue, arrayName[i]);     


        if(arrayName[i] < minValue){
            minValue = arrayName[i];            
        }
    }
    cout << "Min Value is : " << minValue << endl; 
}

int main(){
    int size;

    cout << "Please Enter Length of Array" << endl;
    cin >> size;
    
    // Array can save 100 elements its declaration
    int myArray[100];

    // Getting input in array
    for(int i = 0; i < size ; i++){
        cout << "Please Enter Element of Array" << endl;
        cin >> myArray[i];
    }

    getMax(myArray, size);
    getMin(myArray, size);

    return 0;
}