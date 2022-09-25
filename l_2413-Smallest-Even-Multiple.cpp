// Leetcode
// Author: simranmakhijani55
// https://leetcode.com/contest/weekly-contest-311/problems/smallest-even-multiple/

// ***************************Given Code***************************

// ****************************************************************

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestEvenMultiple(int n) {
        if (n%2==0) return n;
        return n*2;
    }
};