// Leetcode
// Author: simranmakhijani55
// https://leetcode.com/contest/weekly-contest-313/problems/maximum-sum-of-an-hourglass

// ***************************Given Code***************************

// ****************************************************************

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int mx = 0;
        for(int i=0; i<n-2; i++) {
            // int rowmx = 0;
            int rm = 0;
            for(int j=0; j<m-2; j++) {
                rm = grid[i][j] + grid[i][j+1] + grid[i][j+2] + grid[i+2][j] + grid[i+2][j+1] + grid[i+2][j+2] + grid[i+1][j+1];
                mx = max(mx, rm);
            }
            // mx = max(mx, rowmx);
        }
        return mx;
    }
};