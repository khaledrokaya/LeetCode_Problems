class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int sz = s.length();
        int one = count(s.begin(), s.end(), '1');
        string ans;
        ans += *new string(one - 1, '1');
        ans += *new string(sz - one, '0');
        ans += '1';
        return ans;
    }
};