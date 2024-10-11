class Solution {
public:
    int subtractProductAndSum(int n) {
        int p=1;
        int s=0;
        while (n!=0) {
        int d=n%10;
        p*=d;
        s+=d;
        n/=10;
        }
    int ans=(p-s);
    return ans;
    }
};
