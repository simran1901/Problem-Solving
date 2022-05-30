// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1681/problem/B

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
    ll n, m;
    cin >> n;
    ll arr[n];
    rep(i, n) cin >> arr[i];
    ll resIndex = 0;
    cin >> m;
    ll temp;
    rep(i, m)
    {
        cin >> temp;
        resIndex += temp;
    }
    resIndex = resIndex % n;
    cout << arr[resIndex] << '\n';
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