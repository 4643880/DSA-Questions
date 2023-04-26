#include<iostream>
#include<array>

using namespace std;

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int arr3[]){
    
    int i = 0, j= 0;
    int k = 0;
    while(i < size1 && j < size2){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    cout << "1: Here Check value of i: " << i << endl;
    cout << "1: Here Check value of j: " << j << endl;
    // Copying the remaining elements of array 1
    while(i < size1){
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    cout << "2: Here Check value of i: " << i << endl;
    cout << "2: Here Check value of j: " << j << endl;
    // Copying the remaining elements of array 2
    while(j < size2){
        arr3[k] = arr2[j];
        k++;
        j++;
    }  
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
   
   int arr1[6] = {1,3,5,7,9,11};
   int arr2[4] = {2,4,6,8};

   int arr3[9] = {0};

   mergeArrays(arr1,6,arr2,4, arr3);

   printArray(arr3, 10);


    return 0;
}
