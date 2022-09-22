// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1380/C

#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
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
    ll n, x;
    cin >> n >> x;
    v a(n);
    rep(i, n) cin >> a[i];

    sort(a.begin(), a.end());

    v sizes(n + 1);
    ll index = 0;
    for (ll i = n; i > 0; i--)
    {
        ll num = ceil(x / (double)i);
        while (a[index] < num && index < n)
        {
            index++;
        }
        sizes[i] = index;
    }

    ll totalTaken = 0;
    ll groups = 0;
    repn(i, 1, n + 1)
    {
        ll elements = n - sizes[i] - totalTaken;
        ll group = elements / i;
        groups += group;
        totalTaken += group * i;
    }
    cout << groups << '\n';
}

int main()
{
    IOS;

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}