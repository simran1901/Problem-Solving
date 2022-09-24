// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1689/problem/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i, n) cin >> p[i];
    if (n == 1)
    {
        cout << -1 << '\n';
        return;
    }
    vector<int> sortedP(p.begin(), p.end());
    sort(sortedP.begin(), sortedP.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (sortedP[i] == p[i])
        {
            swap(sortedP[i], sortedP[i + 1]);
        }
    }
    if (sortedP[n - 1] == p[n - 1])
    {
        if (sortedP[n - 2] != p[n - 1])
            swap(sortedP[n - 1], sortedP[n - 2]);
        else
        {
            if (n > 2)
                swap(sortedP[n - 1], sortedP[n - 3]);
        }
    }
    rep(i, n) cout << sortedP[i] << ' ';
    cout << '\n';
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
