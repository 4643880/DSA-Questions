

class Solution {
public:
    int fib(int n) {
        // Base case
        if(n ==0){
            return 0;
        }
        if(n == 1){
            return 1;
        }

        // Recursive Relation
        int ans  = fib(n-1) + fib(n-2);
        return ans;
        
    }
};