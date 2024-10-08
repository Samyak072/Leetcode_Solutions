class Solution {
public:
    int fib(int n) {
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        int a = 0, b = 1;
        int next;
        for (int i = 2; i <= n; i++) {
            next = a + b;
            a = b;    
            b = next;   
        }
        return b;
    }
};
