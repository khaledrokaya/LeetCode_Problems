class Solution {
public:
    bool isPerfectSquare(int num) {
        int l = 1, r = 46340, mid; // r = 46340 which is 2147395600 id the nearest perfect square number to 2^31 - 1
        while (l <= r) {
            mid = (l + r) / 2;
            if (mid * mid == num) {
                return true;
            }
            else if (mid * mid > num) {
                r = mid - 1;
            }
            else l = mid + 1;
        }
        return false;
    }
};