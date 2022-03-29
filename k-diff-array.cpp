// Cracking the Coding Interview - Technical Questions

//  Given an array of distinct integer values,
// count the number of pairs of integers that have difference k.
// For example, given the array { 1, 7, 5, 9, 2, 12, 3} and the difference k = 2,
// there are four pairs with difference 2: (1, 3), (3, 5), (5, 7), (7, 9).

// leetcode - https://leetcode.com/problems/k-diff-pairs-in-an-array/

#include <bits/stdc++.h>
using namespace std;

int findPairs(vector<int> nums, int k)
{
    int ans = 0;
    // keep all the elements of array with their count in hash map
    unordered_map<int, int> arrmap;
    for (int num : nums)
    {
        ++arrmap[num];
    }

    // special case
    if (k == 0)
    {
        // check for elements with count greater than 1
        for (auto it : arrmap)
        {
            if (it.second > 1)
                ans++;
        }
        return ans;
    }

    // general cases
    for (auto it : arrmap)
    {
        // check for elements if their counterpart is present
        if (arrmap.count(it.first - k))
            ans++;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int k;
    cin >> k;
    cout << findPairs(nums, k);
    return 0;
}