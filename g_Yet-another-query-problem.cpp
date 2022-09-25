// Geeksforgeeks
// Author: simranmakhijani55
// Problem 1 - https://practice.geeksforgeeks.org/contest/interview-series-69/problems/

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> solveQueries(int N, int num, vector<int> &A, vector<vector<int>> &Q) {
        // code here
        map<int, int> count;
        vector<int> temp(N);
        for(int i=N-1; i>=0; i--) {
            temp[i] = ++count[A[i]];
        }
        vector<int> res(num);
        for(int i=0; i<num; i++) {
            int ans = 0;
            for(int j=Q[i][0]; j<=Q[i][1]; j++) {
                if (temp[j]==Q[i][2]) ans++;
            }
            res[i] = ans;
        }
        return res;
    }
};