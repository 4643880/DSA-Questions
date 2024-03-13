

#include <iostream>
#include <limits.h>
using namespace std;

void print3largest(int *arr, int size)
{
    int firstMax = INT_MIN;
    int secondMax = INT_MIN;
    int thirdMax = INT_MIN;

    for (int i = 0; i < size; i++)
    {

        // If arr[i] is greater than first
        if (arr[i] > firstMax)
        {
            thirdMax = secondMax;
            secondMax = firstMax;
            firstMax = arr[i];
        }

        // If arr[i] is in between first
        // and second then update second as I have 34 twice in array
        else if (arr[i] > secondMax && arr[i] != firstMax)
        {
            thirdMax = secondMax;
            secondMax = arr[i];
        }

        else if (arr[i] > thirdMax && arr[i] != secondMax && arr[i] != firstMax)
        {
            thirdMax = arr[i];
        }
    }

    cout << "Three Largest Elements are: " << firstMax << " " << secondMax << " " << thirdMax << endl;
}
int main()
{

    int arr[] = {12, 13, 1, 10, 34, 11, 34};
    int size = sizeof(arr) / sizeof(int);

    print3largest(arr, size);

    return 0;
}