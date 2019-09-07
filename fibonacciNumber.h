class Solution {
public:
    int fib(int N) {
        if (N == 0) {
            return 0;
        }
        else if (N == 1) {
            return 1;
        }
        
        int prev1 = N-1;
        int prev2 = N-2;
        
        return fib(prev1) + fib(prev2);
    }
};