#include <iostream>
using namespace std;

void rearrange(int arr[], int n)
{
    int maintainIndexToPlaceValues = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[maintainIndexToPlaceValues]);
            maintainIndexToPlaceValues++;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    rearrange(arr, n);
    printArray(arr, n);
    return 0;
}