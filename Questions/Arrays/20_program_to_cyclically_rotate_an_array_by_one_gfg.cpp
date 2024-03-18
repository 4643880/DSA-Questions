#include<iostream>
using namespace std;


void rotate(int arr[], int n){
 
    int i = 0;
    int j = n - 1;

    while(i != j){
        swap(arr[i], arr[j]);
        i++;
    }

    // following code will explain result in terminal
    // while (i != j) {
    //     swap(arr[i], arr[j]);
    //     cout << "Iteration " << i + 1 << ": ";
    //     for (int k = 0; k < n; ++k) {
    //         cout << arr[k] << " ";
    //     }
    //     cout << endl;
    //     i++;
    // }
}

void printArray(int arr[], int arr_size)
{

    for (int i = 0; i < arr_size; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
  
    printArray(arr,n);
    
    rotate(arr, n);
 
    printArray(arr,n);
 
    return 0;
}