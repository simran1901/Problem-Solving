// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1521/B

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
    int n;
    cin >> n;
    int x = 1e9 + 7, pos = -1;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        if (a < x)
            x = a, pos = i;
    }
    cout << n - 1 << endl;
    for (int i = 0; i < n; ++i)
    {
        if (i == pos)
            continue;
        cout << pos + 1 << ' ' << i + 1 << ' ' << x << ' ' << x + abs(i - pos) << "\n";
    }
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