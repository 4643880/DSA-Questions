#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    //===============================================================
    // Algorithm 
    //===============================================================
    
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(9); 

    // finding value using binary search
    cout << "Boolean Result: " << binary_search(v.begin(), v.end(),6) << endl;
    cout << "Upper Bound: " << upper_bound(v.begin(), v.end(),6)-v.begin() << endl;
    cout << "Lower Bound: " << lower_bound(v.begin(), v.end(),6)-v.begin() << endl;



    // finding max value
    int a = 10, b = 90;
    cout <<"Max Value is: " << max(a,b) << endl;

    // finding min value
    int a2 = 10, b2 = 90;
    cout <<"Min Value is: " << min(a2,b2) << endl;
    

    // swaping
    swap(a,b);
    cout <<"After Swaping value of a is: " << a << endl;

    // reverse 
    string myString = "abcd";
    reverse(myString.begin(), myString.end());
    cout << myString << endl;


    // rotate
    rotate(v.begin(),v.begin()+1, v.end());
    cout << "After Rotating"<< endl;

    for(auto i : v){
        cout << i << endl;
    }

    // sort 
    cout << "After Sorting"<< endl;
    sort(v.begin(), v.end());
        for(auto i : v){
        cout << i << endl;
    }

    


    return 0;
}