class Solution {
public:
    int fib(int n) {
        int prev1 = 0;
        int prev2 = 1;
        int next = 0;
        if(n==0 || n==1){
            return n;
        }
        for (int i = 2; i <= n; i++) {
            next = prev2 + prev1;
            prev1 = prev2;
            prev2 = next;
        }
        return next;
    }
};