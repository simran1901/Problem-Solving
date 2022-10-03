// Leetcode
// Author: simranmakhijani55
// https://leetcode.com/contest/weekly-contest-313/problems/minimize-xor/

// ***************************Given Code***************************

// ****************************************************************

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimizeXor(int num1, int num2) {
        // count bits
        int bits = 0;
        int m = num2;
        while (m) {
            bits += m & 1;
            m >>= 1;
        }
        
        m = num1;
        int ans = 0;
        int msb = log2(m);
        int start = 1<<msb;\
        // iterate from front while bits>0 and num>0
        while(start>0 && bits>0) {
            if (m&start) {
                // bit is set
                ans |= start;
                bits--;
            }
            start = start>>1;
        }
        // bits left
        while(bits>0) {
            int pos = log2((~ans)&-(~ans));
            ans |= 1 << pos;
            bits--;
        }
        return ans;
    }
};