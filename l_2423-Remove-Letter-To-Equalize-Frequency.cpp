// Leetcode
// Author: simranmakhijani55
// https://leetcode.com/contest/biweekly-contest-88/problems/remove-letter-to-equalize-frequency/

// ***************************Given Code***************************

// ****************************************************************

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool equalFrequency(string word) {
        map<char, int> count;
        int mn = INT_MAX;
        int mx = 0;
        int n = word.length();
        for (int i = 0; i < n; i++)
        {
            count[word[i]]++;
        }
        char mxe, mne;
        for (auto it : count)
        {
            if (it.second < mn)
            {
                mn = it.second;
                mne = it.first;
            }
            if (it.second > mx)
            {
                mx = it.second;
                mxe = it.first;
            }
        }
        if (mne == mxe && mn == 1)
            return true;
        count[mxe]--;
        if (count[mxe] == 0)
        {
            count.erase(mxe);
        }
        bool flag = true;
        int el = count[mne];
        for (auto it : count)
        {
            if (it.second != el)
            {
                flag = false;
                break;
            }
        }
        if (!flag)
        {
            count[mxe]++;
            count[mne]--;

            if (count[mne] == 0)
            {
                count.erase(mne);
            }
            flag = true;
            el = count[mxe];
            for (auto it : count)
            {
                if (it.second != el)
                {
                    flag = false;
                    return false;
                }
            }
        }

        return true;
    }
};