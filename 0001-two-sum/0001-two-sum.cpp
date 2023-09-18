class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> arr;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int tmp = target - nums[i];
            if (arr.count(tmp)) {
                return {arr[tmp], i};
            }
            arr[nums[i]] = i;
        }
        return {}; // No solution found
    }
};