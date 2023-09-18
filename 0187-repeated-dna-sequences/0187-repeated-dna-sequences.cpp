class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string, int> win;
        int l{}, r = 10;
        for (int i = 0; i < s.length(); i++) {
            if (r > s.length()) break;
            string tmp = s.substr(l, 10);
            if (win.find(tmp) == win.end()) {
                win[tmp] = 0;
            }
            else {
                win[tmp]++;
            }
            l++, r++;
        }
        vector<string> ans;
        for (auto& i : win) {
            if (win[i.first]) {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};