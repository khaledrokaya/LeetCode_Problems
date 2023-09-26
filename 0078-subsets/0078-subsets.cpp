class Solution {
#define vi vector<int>
#define pb push_back
#define pob pop_back
private:
    int sz;
    vi num;
    set<vi> ans;
    void work(int idx, vi lol) {
        if (idx == sz) {
            ans.insert(lol);
            return;
        }
        for (int i = idx; i < sz; i++) {
            ans.insert(lol);
            lol.pb(num[i]);
            work(i + 1, lol);
            lol.pob();
        }
    }
public:
    vector<vi> subsets(vi& nums) {
        sz = nums.size();
        num = nums;
        work(0, {});
        vector<vi> endgame = {ans.begin(), ans.end()};
        return endgame;
    }
}a;