// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/160/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, sum = 0;
    cin >> n;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
        sum += coins[i];
    }
    sort(coins.begin(), coins.end());
    int ansSum = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        ansSum += coins[i];
        if (ansSum > sum - ansSum)
        {
            cout << n - i << "\n";
            break;
        }
    }
}