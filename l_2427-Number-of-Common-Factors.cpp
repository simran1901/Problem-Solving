// Leetcode
// Author: simranmakhijani55
// https://leetcode.com/contest/weekly-contest-313/problems/number-of-common-factors

// ***************************Given Code***************************

// ****************************************************************

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int commonFactors(int a, int b) {
        int ans = 0;
        int g = __gcd(a, b);
        
        for (int i = 1; i <= sqrt(g); i++) {
            if (g % i == 0) {
                if (g / i == i)
                    ans++;
                else
                    ans += 2;
            }
        }
        return ans;
    }
};