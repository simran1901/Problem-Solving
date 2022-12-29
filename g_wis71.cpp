#include<bits/stdc++.h>
#define ll long long

using namespace std;

class Solution {
    
    int helper(int i, int end, vector<vector<int>>& arr, vector<vector<int>> &dp) {
        
        if (i>=arr.size()) {
            return 0ll;
        }
        if (dp[i][end]!=-1) {
            return dp[i][end];
        }
        
        int mx = helper(i+1, end, arr, dp);
        if (arr[i][0]>=end) {
            mx = max(arr[i][2] + helper(i+1, arr[i][1], arr, dp), mx);
        }
        
        return dp[i][end] = mx;
    }
public:
    long long maxScore(int n, vector<vector<int>>& arr) {
        // Code here
        sort(arr.begin(), arr.end());
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return helper(0, 0, arr, dp);
    }
};

int main() {
    int n;
    cin>>n;
    vector<vector<int>> arr(n, vector<int>(3));
    for(int i=0; i<n; i++) {
        cin>>arr[i][0];
        cin>>arr[i][1];
        cin>>arr[i][2];
    }
    Solution ob;
    cout<<ob.maxScore(n, arr);
}