

#include<iostream>
using namespace std;


bool isSorted(int arr[], int n){

    // Base Case
    if(n==0 || n==1){
        return 1;
    }

    // Recursive Relation    
    for(int i = 0; i < n ; i++){
        if(arr[i] > arr[i + 1]){
            return 0;
        }else{
            int ans = isSorted(arr + 1, n -1);
            return ans;
        }
    }

}
int main(){

    int arr[5] = {2,4,6,8,10};

    int result = isSorted(arr, 5);
    cout << result << endl;

    return 0;
}