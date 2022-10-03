// Geeksforgeeks
// Author: simranmakhijani55
// Problem 2 - https://practice.geeksforgeeks.org/contest/interview-series-70/problems/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    bool traversal(int index, int val, vector<int> &arr, vector<bool> &visited, vector<bool> &good) {
        if (index<0 || index>=arr.size()) return true;
        if (visited[index] && good[index]) return true;
        else if (visited[index] && !good[index]) return false;
        visited[index] = true;
        return good[index] = traversal(index+arr[index], val+1, arr, visited, good);
    }
public:
    int goodStones(int n,vector<int> &arr){
        // Code here
        vector<bool> visited(n, false);
        vector<bool> good(n, false);
        int ans = 0;
        for(int i=0; i<n; i++) {
            if (!visited[i]){
                traversal(i, 0, arr, visited, good);
            }
        }
        for(int i=0; i<n; i++) {
            if (good[i]) ans++;
        }
        return ans;
    }  
};