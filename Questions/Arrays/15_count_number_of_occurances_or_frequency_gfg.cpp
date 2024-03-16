

#include<iostream>
using namespace std;

void findOccurences(int *arr, int size , int x){
    int ans = 0;

    for(int i = 0; i < size ; i++){
        if(arr[i] == x){
            ans++;
        }
    }
    cout << x << " Occurs " << ans << " Times " << endl;
}

int main(){
    int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8, 2};

    int size = sizeof(arr) / sizeof(int);

    int x = 2;

    findOccurences(arr, size, x);

    return 0;
}