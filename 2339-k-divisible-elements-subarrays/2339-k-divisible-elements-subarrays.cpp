class Solution {
public:
    int countDistinct(vector<int>& nums , int k, int p) {
         int l{}, r{}, sum{};
        set<vector<int>> arr;
        while (r < nums.size()) {
            int ll = l;
            if (nums[r] % p == 0) sum++;
            while (sum > k) {
                if (nums[l] % p == 0) sum--;
                l++;
                ll = l;
            }
            while (ll <= r) {
                vector<int> tmp(nums.begin() + ll, nums.begin() + r + 1);
                arr.insert(tmp);
                ll++;
            }
            r++;
        }
        return arr.size();
    }
};