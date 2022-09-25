// Leetcode
// Author: simranmakhijani55
// https://leetcode.com/contest/weekly-contest-310/problems/divide-intervals-into-minimum-number-of-groups/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<pair<int,char>> arr(2*n);
        int ptr = 0;
        for(int i=0; i<n; i++) {
            arr[ptr].first = intervals[i][0];
            arr[ptr++].second = 'a';
            
            arr[ptr].first = intervals[i][1];
            arr[ptr++].second =  'd';
        }
        
        sort(arr.begin(), arr.end());
        int mi = n, c=0;
        for(int i=0; i<2*n; i++) {
            c += arr[i].second=='a'? -1:1;
            mi = min(c, mi);
        }
        
        return mi*-1;
    }
};