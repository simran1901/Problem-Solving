// Leetcode
// Author: simranmakhijani55
// https://leetcode.com/contest/weekly-contest-310/problems/most-frequent-even-element/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> freq;
        int mx = 0;
        for(int i=0; i<nums.size(); i++) {
            
            if (nums[i]%2==0) {
                int* nu = &freq[nums[i]];
                (*nu)++;
                mx = max(*nu, mx);
            }
            
        }
        
        for(auto it: freq) {
            if (it.second == mx) {
                return it.first;
            }
        } 
        return -1;
    }
};