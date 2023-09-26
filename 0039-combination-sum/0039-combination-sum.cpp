class Solution {
private:
    int sz, end;
    vector<int> nums;
    vector<vector<int>> ans;
    void work(int idx, vector<int> lol, int sum){
        if (sum == end) {
            ans.push_back(lol);
            return;
        }
        if (sum > end)
            return;
        for (int i = idx; i < sz; ++i) {
            sum += nums[i];
            lol.push_back(nums[i]);
            work(i, lol, sum);
            sum -= nums[i];
            lol.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        nums = candidates;
        sz = candidates.size();
        end = target;
        work(0, {}, 0);
        return ans;
    }
}a;