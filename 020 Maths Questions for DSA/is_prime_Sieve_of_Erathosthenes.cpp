
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        int counter = 0;

        // e.g n = 40 then indexs of vector will 0 to 39 that's why doing n+1
        vector<bool> prime(n+1, true);

        // In the beginning we are not considering zero & one index as prime
        prime[0] = prime[1] = false;

        // Values and Indexes Example
        // false false true true true true true
        //   0     1    2     3    4    5    6
        for(int i = 2; i < n; i++){
            if(prime[i] == true){
                counter++;
                
                // i = 2 --- 2 * 2 = 4 || j has 4 , then j + 1 => 4+2 means 6
                // Cancelling all other values that are multiplying with i
                for(int j = 2*i ; j < n ; j += i){
                    prime[j] = false;
                }
            }
        }
        return counter;


    }
};