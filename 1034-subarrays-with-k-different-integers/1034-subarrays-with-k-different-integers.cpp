class Solution {
public:
    int subArray(vector<int>& nums, int k) {
    int n = nums.size();
    map <int, int> mp;
    long long j = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        mp[nums[i]]++;
        while (mp.size() > k) {
            mp[nums[j]]--;
            if (mp[nums[j]] == 0)
                mp.erase(nums[j]);
            j++;
        }
        ans += i - j + 1;
    }
    return ans;
}
int subarraysWithKDistinct(vector<int>& nums, int k) {
        // return the count of subarrays with exactly k distinct elements minus the count of subarrays with less than k distinct elements
        return subArray(nums, k) - subArray(nums, k - 1);
    }
};