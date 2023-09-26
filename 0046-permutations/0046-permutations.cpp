class Solution {
private:
    void work(vector<int> arr, vector<vector<int>>& ans, int idx) {
        if (idx >= arr.size()) {
            ans.push_back(arr);
            return;
        }
        for (int i = idx; i < arr.size(); i++) {
            swap(arr[idx], arr[i]);
            work(arr, ans, idx + 1);
            swap(arr[idx], arr[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& arr) {
        vector<vector<int>> ans;
        int idx = 0;
        work(arr, ans, idx);
        return ans;
    }
}a;