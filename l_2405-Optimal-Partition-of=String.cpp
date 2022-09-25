// Leetcode
// Author: simranmakhijani55
// https://leetcode.com/contest/weekly-contest-310/problems/optimal-partition-of-string/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int partitionString(string s) {
        vector<bool> arr(26);
        int m = 0, c  = 1;
        for(int i=0; i<s.length(); i++) {
            if (arr[s[i]-'a']) {
                c++;
                // go back m times
                for(int j=1; j<=m; j++){
                    arr[s[i-j]-'a'] = false;
                }
                m = 0;
            }
            arr[s[i]-'a'] = true;
            m++;
        }
        return c;
    }
};