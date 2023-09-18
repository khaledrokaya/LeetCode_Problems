class Solution {
public:
    int arrangeCoins(int n) {
        int l = 1, r = 65535, mid;
        while (l <= r) {
            mid = (l + r) / 2;
            long long tmp = ((long long)mid * (mid + 1)) / 2;
            if (tmp > n) {
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        return r;
    }
};