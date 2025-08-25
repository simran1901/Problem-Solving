// https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/?envType=daily-question&envId=2025-08-24

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans = 0, start = 0;
        bool zero = false;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                if (!zero) {
                    zero = true;
                } else {
                    ans = max(ans, i - start - 1);
                    // move the start pointer till one zero is surpassed
                    while (nums[start] != 0)
                        start++;
                    start++;
                }
            }
        }
        ans = max(ans, n - 1 - start);
        return ans;
    }
};
