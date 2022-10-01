// Leetcode
// Author: simranmakhijani55
// 

// ***************************Given Code***************************

// ****************************************************************

#include<bits/stdc++.h>
using namespace std;

class LUPrefix {
    int start = 0;
    vector<bool> arr;
public:
    LUPrefix(int n) {
        arr.assign(n, false);
    }
    
    void upload(int video) {
        arr[video-1] = true;
    }
    
    int longest() {
        for(int i=start; i<arr.size(); i++) {
            if (arr[i]==true) start++;
            else break;
        }
        return start;
    }
};