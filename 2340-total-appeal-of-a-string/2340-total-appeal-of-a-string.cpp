class Solution {
public:
    long long appealSum(string s) {
        long long c = 0, n = s.size();
        vector<long long> p(26, -1);
        for (int i = 0; i < n; ++i) {
            c += (i - p[s[i] - 'a']) * (n - i);
            p[s[i] - 'a'] = i;
        }
        return c;
    }
};