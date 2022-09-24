// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1721/problem/A

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
    string a, b;
    cin >> a >> b;
    map<char, int> count;
    rep(i, 2) count[a[i]]++;
    rep(i, 2) count[b[i]]++;

    cout << count.size() - 1 << '\n';
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