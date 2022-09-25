// Leetcode
// Author: simranmakhijani55
// https://leetcode.com/contest/weekly-contest-312/problems/find-all-good-indices/

// ***************************Given Code***************************

// ****************************************************************

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> goodIndices(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> ans;
        vector<int> after(n);
        vector<int> before(n);
        before[0] = 0,after[n-1] = 0;
        before[1] = 1, after[n-2] = 1;
        for(int i=2; i<n; i++) {
            if (arr[i-1]<=arr[i-2]) {
                before[i] = before[i-1]+1;
            }
            else {
                before[i] = 1;
            }
        }
        for(int i=n-3; i>=0; i--) {
            if (arr[i+1]<=arr[i+2]) {
                after[i] = after[i+1]+1;
            }
            else {
                after[i] = 1;
            }
        }
        
        for(int i=k; i<n-k; i++) {
            if (before[i]>=k && after[i]>=k) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};