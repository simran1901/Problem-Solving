// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1256/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll a, b, n, s;
    cin >> a >> b >> n >> s;
    ll ans = 0;
    if (a < s / n)
        s -= a * n;
    else
        s -= s / n * n;
    if (b >= s)
        s = 0;
    if (s == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
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