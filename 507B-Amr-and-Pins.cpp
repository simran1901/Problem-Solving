// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/507/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define v vector<ll>
#define vv vector<v>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    ll r, x1, y1, x2, y2;
    cin >> r >> x1 >> y1 >> x2 >> y2;
    double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    cout << ceil(d / (2 * r));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}