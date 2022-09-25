// Leetcode
// Author: simranmakhijani55
// https://leetcode.com/contest/weekly-contest-312/problems/longest-subarray-with-maximum-bitwise-and/

// ***************************Given Code***************************

// ****************************************************************

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int mx = *max_element(nums.begin(), nums.end());
        int mxcount = 0;
        int count = 0;
        for(int i=0; i<n; i++) {
            if (nums[i]==mx) {count++; mxcount = max(mxcount, count);}
            else count = 0;
        }
        return mxcount;
    }
};