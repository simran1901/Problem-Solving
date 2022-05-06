// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/189/A

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

int dp[4001];

int findSum(int target, int arr[])
{
    if (target == 0)
        return 0;
    if (target < 0 || (target > 0 && target < arr[0]))
        return 0xACCE97ED;
    if (!dp[target])
        dp[target] = max(findSum(target - arr[0], arr), max(findSum(target - arr[1], arr), findSum(target - arr[2], arr))) + 1;
    return dp[target];
}

void solve()
{
    int target;
    cin >> target;
    memset(dp, 0, sizeof(dp));
    int arr[3];
    for (int i = 0; i < 3; i++)
        cin >> arr[i];
    sort(arr, arr + 3);
    cout << findSum(target, arr);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}