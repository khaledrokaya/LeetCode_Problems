class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq; // Deque to store indices of elements in the window
        vector<int> ans; // Vector to store the result
        int n = nums.size(); // Total number of elements in the input vector

        // Check for invalid input
        if (n == 0 || k <= 0 || k > n) {
            return ans; // Return an empty vector for invalid inputs
        }

        // Process the first sliding window of size k
        for (int i = 0; i < k; i++) {
            // Remove indices of elements that are less than the current element
            // from the back of the deque as they won't be the maximum elements
            while (!dq.empty() && nums[i] >= nums[dq.back()]) {
                dq.pop_back();
            }
            dq.push_back(i); // Add the current element's index to the back of the deque
        }

        ans.push_back(nums[dq.front()]); // The front of the deque contains the index of the maximum element

        // Slide the window and find maximums for the rest of the elements
        for (int i = k; i < nums.size(); i++) {
            if (i - dq.front() >= k) {
                dq.pop_front(); // If the front element of the deque is outside the current window, remove it
            }

            // Remove indices of elements that are less than the current element
            // from the back of the deque as they won't be the maximum elements
            while (!dq.empty() && nums[i] >= nums[dq.back()]) {
                dq.pop_back();
            }

            dq.push_back(i); // Add the current element's index to the back of the deque
            ans.push_back(nums[dq.front()]); // The front of the deque contains the index of the maximum element
        }

        return ans; // Return the vector containing maximums for each sliding window
    }
};