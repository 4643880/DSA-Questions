#include<iostream>
using namespace std;


void printUnion(int *arr1, int *arr2, int size1, int size2){

    int i = 0;
    int j = 0;
    while(i < size1 && j < size2){
        if(arr1[i] < arr2[j]){
            cout << arr1[i] << " ";
            i++;
        }else if(arr2[j] < arr1[i]){
            cout << arr2[j] << " ";
            j++;
        }else{
            // if both are equal 
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }

    while(i < size1){
        cout << arr1[i] << " ";
            i++;
    }
    while(j < size2){
        cout << arr2[j] << " ";
            j++;
    }
    cout << endl;
}


void printIntersection(int *arr1, int *arr2, int size1, int size2){

    int i = 0;
    int j = 0;
    while(i < size1 && j < size2){
        if(arr1[i] < arr2[j]){            
            i++;
        }else if(arr2[j] < arr1[i]){
            j++;
        }else{
            // if both are equal 
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }

}


int main()
{
    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };
 
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
 
    // Function calling
    printUnion(arr1, arr2, m, n);
    printIntersection(arr1, arr2, m, n);
 
    return 0;
}