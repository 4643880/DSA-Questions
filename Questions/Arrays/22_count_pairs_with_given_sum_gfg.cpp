

#include<iostream>
using namespace std;
 
int getPairsCount(int arr[], int n, int k)
{   
    int counter = 0;
    for(int i = 0; i < n ; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] +  arr[j] == k){
                counter++;
            }
        }
    }
    return counter;
}
 
// Driver function to test the above function
int main()
{
    int arr[] = { 1, 5, 7, -1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int K = 6;
    cout << "Count of pairs is "
         // Function Call
         << getPairsCount(arr, n, K);
    return 0;
}