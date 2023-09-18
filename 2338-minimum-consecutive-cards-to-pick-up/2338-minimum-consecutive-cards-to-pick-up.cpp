class Solution {
public:
    int minimumCardPickup(vector<int>& tmp) {
        map<int, int> arr;  
        int ans = INT_MAX;
        for (int i = 0; i < tmp.size(); i++) {
            if (arr.count(tmp[i])) {
                ans = min(ans, i - arr[tmp[i]] + 1);
            }
            arr[tmp[i]] = i;
        }
        return ans != INT_MAX ? ans : -1;
    }
};