// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1660/problem/D

// Incorrect

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int maxSubarrayProduct(vector<int> arr, int &end)
{
    int n = arr.size();
    int max_ending_here = arr[0];

    int min_ending_here = arr[0];

    int max_so_far = arr[0];
    for (int i = 1; i < n; i++)
    {
        int temp = max({arr[i], arr[i] * max_ending_here, arr[i] * min_ending_here});
        min_ending_here = min({arr[i], arr[i] * max_ending_here, arr[i] * min_ending_here});
        max_ending_here = temp;
        if (max_so_far < max_ending_here)
        {
            end = i;
        }
        max_so_far = max(max_so_far, max_ending_here);
    }
    return max_so_far;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int firstZero = -1, lastZero = -1, numOfNeg = 0, firstNeg = -1, lastNeg = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int end = -1;
    int start = 0;
    int maxProduct = maxSubarrayProduct(arr, end);
    if (maxProduct <= 0)
        cout << n << " 0\n";
    else
    {
        int mul = 1;
        for (int i = end; i >= 0; i--)
        {
            mul *= arr[i];
            if (mul == maxProduct)
            {
                start = i;
                break;
            }
        }
    }
    cout << start << " " << n - end - 1 << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}