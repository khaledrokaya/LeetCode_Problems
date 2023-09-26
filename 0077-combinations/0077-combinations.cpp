class Solution {
private:
    int sz, end;
    vector<vector<int>> ans;
    void work(int idx, vector<int> lol){
        if(lol.size() == end){
            ans.push_back(lol);
            return;
        }
        for (int i = idx; i <= sz; ++i) {
            lol.push_back(i);
            work(i + 1, lol);
            lol.pop_back();
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        sz = n;
        end = k;
        work(1, {});
        return ans;
    }
}a;