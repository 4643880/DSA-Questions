#include<iostream>
#include<vector>


using namespace std;

vector<int> reverse(vector<int> v){
    int start = 0;
    int end = v.size()-1;

    while(start <= end){
        swap(v[start], v[end]);
        start++;
        end--;
    }
    return v;
}


void printVector(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i];
    }
    cout << endl;
}


int main(){
    vector<int> v;

    v.push_back(11);
    v.push_back(22);
    v.push_back(33);
    v.push_back(44);
    v.push_back(55);
    v.push_back(66);

    printVector(v);
    vector<int> ans = reverse(v);
    printVector(ans);



    return 0;
}
