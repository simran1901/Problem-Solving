// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/573/A

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
    ll g = 0;
    rep(i, n)
    {
        cin >> arr[i];
        g = __gcd(g, arr[i]);
    }
    ll m;
    rep(i, n)
    {
        m = arr[i];
        m = m / g;
        while (m % 2 == 0 && m > 0)
            m /= 2;
        while (m % 3 == 0 && m > 0)
            m /= 3;
        if (m != 1)
        {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}