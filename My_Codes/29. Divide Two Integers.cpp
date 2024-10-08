class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == divisor) {
            return 1;
        }
        unsigned int ans = 0;
        int sign = 1;
        if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) {
            sign = -1;
        }
        unsigned int n = abs(dividend);
        unsigned int d = abs(divisor);
        while (n >= d) {
            int count = 0;
            while (n > (d << (count + 1))) {
                count++;
            }
            n -= d << count;
            ans += 1 << count;
        }
        if (ans == (1 << 31) && sign == 1) {
            return INT_MAX;
        }
        return sign * ans;
    }
};
