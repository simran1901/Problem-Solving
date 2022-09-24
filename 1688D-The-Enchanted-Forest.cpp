// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1688/problem/C

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

ll maxSum(ll arr[], int n, int k)
{
    // k must be smaller than n
    if (n < k)
    {
        return -1;
    }

    // Compute sum of first window of size k
    ll res = 0;
    for (ll i = 0; i < k; i++)
        res += arr[i];

    ll curr_sum = res;
    for (ll i = k; i < n; i++)
    {
        curr_sum += arr[i] - arr[i - k];
        res = max(res, curr_sum);
    }

    return res;
}

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll summ = 0;
    ll arr[n];

    rep(i, n)
    {
        cin >> arr[i];
        summ += arr[i];
    }
    if (k > n)
    {
        // get sum of all
        summ += (n * (n - 1)) / 2;
        summ += (k - n) * n;
    }
    else
    {
        summ = maxSum(arr, n, k) + ((k - 1) * k / 2);
    }
    cout << summ << '\n';
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
