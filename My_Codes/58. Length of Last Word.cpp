class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=s.size();
        int count=0;
        int i=len-1;
        while (i>=0 && s[i]== ' ') {
            i--;
        }
        while (i>=0 && s[i]!= ' ') {
            count++;
            i--;
        }
        return count;
    }
};
