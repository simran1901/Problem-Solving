// Leetcode
// Author: simranmakhijani55
// https://leetcode.com/contest/weekly-contest-311/problems/length-of-the-longest-alphabetical-continuous-substring/

// ***************************Given Code***************************

// ****************************************************************

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestContinuousSubstring(string s) {
        int ans = 1, count = 1;
        for(int i=1; i<s.length(); i++){
            if (s[i]==s[i-1]+1) {
                count++;
            }
            else count = 1;
            ans = max(count,ans);
        }
        return ans;
    }
};