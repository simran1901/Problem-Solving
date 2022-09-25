// Geeksforgeeks
// Author: simranmakhijani55
// Problem 2 - https://practice.geeksforgeeks.org/contest/interview-series-69/problems/

#include<bits/stdc++.h>
using namespace std;

//User function Template for C++

class Solution{
public:
    vector<int> optimalArray(int n,vector<int> &a){
        // Code here
        vector<int> res(n);
        vector<int> prefix(n);
        prefix[0] = a[0];
        vector<int> suffix(n);
        suffix[n-1] = a[n-1];
        for(int i=1; i<n; i++) {
            prefix[i] = prefix[i-1]+a[i];
        }
        for(int i=n-2; i>=0; i--) {
            suffix[i] = suffix[i+1]+a[i];
        }
        // median element
        int ans = 0;
        for(int i=0; i<n; i++){
            ans = 0;
            if(i%2==0)
            {
                ans = -prefix[i/2]+suffix[i/2];
                if (i<n-1) ans -= suffix[i+1];
                
            }
            else {
                ans = -prefix[i/2]+suffix[i/2+1];
                if (i<n-1) ans -= suffix[i+1];
            }
            res[i] = ans;
        }
        return res;
    }
};