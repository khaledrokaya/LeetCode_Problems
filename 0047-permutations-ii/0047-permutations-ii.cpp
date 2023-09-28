class Solution {
private:
    void work(vector<int> arr, set<vector<int>>& ans, int idx) {
        if (idx >= arr.size()) {
            ans.insert(arr);
            return;
        }
        for (int i = idx; i < arr.size(); i++) {
            swap(arr[idx], arr[i]);
            work(arr, ans, idx + 1);
            swap(arr[idx], arr[i]);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& arr) {
        set<vector<int>> ans;
        int idx = 0;
        work(arr, ans, idx);
        vector<vector<int>> lol = {ans.begin(), ans.end()};
        return lol;
    }
}a;