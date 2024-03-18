#include<iostream>
using namespace std;


using namespace std;

// Given an array arr[] of size N-1 with integers in the range of [1, N], the task is to find the missing number from the first N integers.
int getMissingNo(int a[], int n)
{
    // // Given the range of elements are 1 more than the size of array
    int N = n + 1;
    
    // 5 * (5 + 1) / 2 => 4 * 3 => 15 e.g 1+2+3+4+5
    int total = (N) * (N + 1) / 2;
    // cout << total << endl;
    for (int i = 0; i < n; i++)
        total -= a[i];
    return total;
}

int main()
{
    int arr[] = { 1, 2, 3, 5 };
    int N = sizeof(arr) / sizeof(arr[0]);
  
    // Function call
    int miss = getMissingNo(arr, N);
    cout << miss;
    return 0;
}