// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1352/C

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = k;
    ll current = k / n;
    ll prev = 0;
    while (current)
    {
        current = k / n - prev;
        prev = k / n;
        k = k + current;
    }
    cout << k << "\n";
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