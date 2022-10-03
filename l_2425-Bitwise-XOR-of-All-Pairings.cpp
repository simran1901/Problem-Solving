// Leetcode
// Author: simranmakhijani55
// https://leetcode.com/contest/biweekly-contest-88/problems/bitwise-xor-of-all-pairings

// ***************************Given Code***************************

// ****************************************************************

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0;
        if (nums1.size()%2==1)
        for(int i=0; i<nums2.size(); i++) {
            ans ^= nums2[i];
        }
        
        if (nums2.size()%2==1)
        for(int i=0; i<nums1.size(); i++){
            ans ^= nums1[i];
        }
        return ans;
    }
};