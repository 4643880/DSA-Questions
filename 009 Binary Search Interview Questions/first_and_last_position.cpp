#include <iostream>

using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    int ans = -1;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    int ans = -1;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}


int main()
{

    int arr[10] = {1,2,2,3,3,3,3,3,4,5};
 
    cout << "First Occurance of 3 is at Index No: " << firstOcc(arr, 10, 3) << endl;
    cout << "Last Occurance of 3 is at Index No: " << lastOcc(arr, 10, 3) << endl;

    cout << "Total No of Occurance of 3 is: " << (lastOcc(arr, 10, 3) - firstOcc(arr, 10, 3)) + 1 << endl;


    return 0;
}