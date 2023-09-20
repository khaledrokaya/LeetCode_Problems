class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> uniqueChars;
        int maxLength = 0;
        int left = 0, right = 0;
        while (right < s.length()) {
            if (uniqueChars.find(s[right]) == uniqueChars.end()) {
                  uniqueChars.insert(s[right]);
                  maxLength = max(maxLength, right - left + 1);
                  right++;
            }
            else {
                  uniqueChars.erase(s[left]);
                  left++;
            }
      }
      return maxLength; 
    }
};