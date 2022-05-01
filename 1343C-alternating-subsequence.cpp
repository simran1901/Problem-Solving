// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1343/C

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    rep(i, n) cin >> arr[i];
    int in = 0;
    ll sum = 0;
    while (in < n)
    {
        int maxEl = arr[in];
        if (arr[in] > 0)
        {
            while (arr[in] > 0 && in < n)
            {
                maxEl = max(maxEl, arr[in]);
                in++;
            }
        }
        else
        {
            while (arr[in] < 0 && in < n)
            {
                maxEl = max(maxEl, arr[in]);
                in++;
            }
        }
        // cout << maxEl << " ";
        sum += maxEl;
    }
    cout << sum << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}