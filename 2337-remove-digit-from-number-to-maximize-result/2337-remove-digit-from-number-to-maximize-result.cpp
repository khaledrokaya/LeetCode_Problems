class Solution {
public:
    string removeDigit(string s, char c) {
        priority_queue<string> arr;
        int r{}, n = s.length();
        while (r < n) {
            string tmp = s;
            if (s[r] == c) tmp.erase(r, 1), arr.push(tmp);
            r++;
        }
        return  arr.top();
    }
};