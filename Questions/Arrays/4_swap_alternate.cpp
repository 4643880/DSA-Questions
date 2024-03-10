#include <iostream>
using namespace std;

void swapAlternate(int getArray[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i+1 < size)
        {   
            // built in function
            // swap(getArray[i], getArray[i + 1]);            

            // Manual Formula 
            int temp = getArray[i];
            getArray[i] = getArray[i + 1];
            getArray[i + 1] = temp;
        }
    }
}

void printArray(int getArray[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << getArray[i] << " ";
    }
}

int main()
{
    int arr1[6] = {1, 2, 3, 4, 5, 6}; // Result should be {2,1,4,3,6,5}
    int size = sizeof(arr1) / sizeof(int);

    swapAlternate(arr1, size);
    printArray(arr1, size);


    cout << endl;
    cout << endl;


    int arr2[5] = {1, 2, 3, 4, 5}; // Result should be {2,1,4,3,5}
    int size2 = sizeof(arr2) / sizeof(int);

    swapAlternate(arr2, size2);
    printArray(arr2, size2);
    

    return 0;
}