
#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

// Also can use the pass by reference
vector<int> reverseVector(vector<int> v){
    int left = 0;
    int right = v.size() -1;

    while(left < right){
        int temp = v[left];
        v[left] = v[right];
        v[right] = temp;
        left++;
        right--;
    }

    return v;
}




int main(){

    vector<int> v;

    v.push_back(11);
    v.push_back(22);
    v.push_back(33);
    v.push_back(44);
    v.push_back(55);

    printVector(v);
    vector<int> reversedVector = reverseVector(v);
    printVector(reversedVector);

    return 0;
}