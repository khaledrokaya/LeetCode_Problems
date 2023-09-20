class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l{}, r = (int)nums.size() - 1, ans{-1};
        while(l <= r){
            int mid = (l + r) / 2;
            if(nums[mid] == target) {
                ans = mid;
                break;
            }
            else if(nums[mid] > target) r = mid - 1;
            else l = mid + 1;
        }
        return ans;
    }
};