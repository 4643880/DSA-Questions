#include <iostream>
#include<unordered_map>
#include<vector>
using namespace std;


vector<int> duplicates(int arr[], int n){
    unordered_map<int, int> frequencyMap;
    vector<int> duplicates;

    for(int i = 0; i < n; i++){
        frequencyMap[arr[i]]++;
    }

    for(auto x : frequencyMap){
        // cout << x.first << " --> " << x.second << endl;
        if(x.second > 1){
            duplicates.push_back(x.first);
        }
    }

    return duplicates;
}

void printVector(vector<int> v){
    for(auto x : v){
        cout << x << " ";
    }

    // for(int i = 0; i < v.size(); i++){
    //     cout << v[i] << " " ;
    // }
}


int main() {
    int arr[] = { 1, 6, 3, 1, 3, 6, 6, 11 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    vector<int> dup = duplicates(arr, arr_size);

    printVector(dup);

    return 0;
}