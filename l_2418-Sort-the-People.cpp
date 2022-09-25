// Leetcode
// Author: simranmakhijani55
// https://leetcode.com/contest/weekly-contest-312/problems/sort-the-people/

// ***************************Given Code***************************

// ****************************************************************

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = heights.size();
        vector<pair<int, string>> arr(n, pair<int,string>());
        for(int i=0; i<n; i++) {
            arr[i].first = heights[i];
            arr[i].second = names[i];
        }
        
        sort(arr.begin(), arr.end(), greater());
        for (int i=n-1; i>=0; i--) {
            cout<<arr[i].first<<' ';
            names[i] = arr[i].second;
        }
        return names;
    }
};