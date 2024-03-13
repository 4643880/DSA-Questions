

#include <iostream>
#include<stack>
#include<vector>
using namespace std;

// Next Samller Element , first smaller , time complaxity n square

// void printNSE(int *arr, int size)
// {
//     int next = -1;

//     for (int i = 0; i < size; i++)
//     {
//         next = -1; // Reset next for each element
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 next = arr[j];
//                 break;
//             }
//         }
//         cout << arr[i] << " --> " << next << endl;
//     }
// }


// Stack Approach
// https://youtu.be/Li08Xq-7gck?feature=shared

// input => {11, 13, 21, 3};
// ||
// ||
// ||
// |11,0| pushing first time with index

void printNSE(int *arr, int size)
{
    stack<pair<int, int>> s;

    // pushing first element with it's index which is zero
    s.push({arr[0], 0});

    vector<int> ans(size);


    for(int i = 1; i < size; i++){

        while(!s.empty() && s.top().first > arr[i] ){
            // maintaining answer array or vector
            ans[s.top().second] = arr[i];
            s.pop();
        }
        s.push({arr[i], i});
    }
    
    // Ramining elements in stack whose ans is not available in array
    while(!s.empty()){  
        ans[s.top().second] = -1;
        s.pop();
    }

    // Printing the elements
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

}


int main()
{

    int arr[] = {11, 13, 21, 3};
    int n = sizeof(arr) / sizeof(int);
    printNSE(arr, n);

    // Pair example
    // pair <int, int> p;

    // p.first = 10;
    // p.second = 20;

    // cout << p.first << endl;
    // cout << p.second << endl;


    return 0;
}