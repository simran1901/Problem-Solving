// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1341/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n";
#define cn cout << "NO\n";

using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    rep(i, n) cin >> arr[i];
    k -= 2;
    ll maxPeaks = 0;
    ll index = 1;
    ll count = 0;
    for (ll i = 1; i <= k; i++)
    {
        // calculate number of peaks
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            count++;
        }
    }
    if (count > maxPeaks)
    {
        maxPeaks = count;
        index = 1;
    }
    for (ll i = 2; i + k < n; i++)
    {
        // remove i-1 add i+k
        if (arr[i - 1] > arr[i - 2] && arr[i - 1] > arr[i])
            count--;

        if (arr[i + k - 1] > arr[i + k - 2] && arr[i + k - 1] > arr[i + k])
            count++;

        if (count > maxPeaks)
        {
            maxPeaks = count;
            index = i;
        }
    }

    cout << maxPeaks + 1 << " " << index << "\n";
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