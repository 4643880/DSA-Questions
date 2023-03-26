#include<iostream>

using namespace std;

    long long int sqrtInteger(int num){
        int start = 0;
        int end = num;
        long long int mid = start + (end-start)/2;
        long long int ans = -1;
        while(start <= end){
            long long int square = mid * mid;
            if(square == num){
                return mid;
            }else if(square < num){
                ans = mid;
                start = mid + 1;
            }else{
                end = mid -1;
            }
            mid = start + (end-start)/2;
        }
        return ans;
    }

// n is number e.g 36 or 25 , precision is after . 2 digit or 3 digits 
double morePrecision(int n, int precision , int tempSolution){
    double factor = 1;    
    double ans = tempSolution;

    for(int i = 0; i<precision; i++){
        factor = factor/10;
        // 0.1
        // 0.01
        // 0.001
        // ans is 6 or har bar factor plus ho raha ha ans main
        // (6 ; 6*6 < 37 ; 6+0.1){}
        for(double j = ans; (j*j)<n ; j=j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter the number..." <<  endl;
    cin >> n;    
    int tempSolution = sqrtInteger(n);    
    cout << "Int Square Root of " << n << " is: " << tempSolution << endl;
    cout << "Double Square Root of " << n << " is: " << morePrecision(n, 3, tempSolution) << endl;
    
    

    return 0;
}