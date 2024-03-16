#include <iostream>
using namespace std;

void sort012(int *arr, int size){
    int count0 = 0, count1 = 0, count2 = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            count0++;
        }else if(arr[i] == 1){
            count1++;
        }else if(arr[i] == 2){
            count2++;
        }
    }

    int index = 0;
    while(count0 > 0){
        arr[index] = 0;
        index++;
        count0--;
    }
    while(count1 > 0){
        arr[index] = 1;
        index++;
        count1--;
    }
    while(count2 > 0){
        arr[index] = 2;
        index++;
        count2--;
    }

    // cout << count0 << " " << count1 << " " << count2 << endl;
}

void printArray(int arr[], int arr_size)
{

    for (int i = 0; i < arr_size; i++)
    {

        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort012(arr, n);

    printArray(arr, n);

    return 0;
}
