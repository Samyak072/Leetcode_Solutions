class Solution {
public:
    int reverse(int x) {
        long long a=0;
        long long rem;
        while (x!=0) {
            rem=x%10;
            a=a*10+rem;
            x/=10;
        }
        if (a>INT_MAX || a< INT_MIN) {
            return 0;
        }
        return static_cast<int>(a);
    }
};
