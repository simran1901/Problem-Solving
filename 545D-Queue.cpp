// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/545/D

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
    ll n;
    cin >> n;
    ll arr[n];
    rep(i, n) cin >> arr[i];
    sort(arr, arr + n);
    ll sum = 0, ans = 0;
    rep(i, n)
    {
        if (sum <= arr[i])
        {
            ans++;
            sum += arr[i];
        }
    }
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}