// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/330/B

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
    ll n, m;
    cin >> n >> m;
    vector<bool> arr(n + 1, true);
    arr[0] = false;
    rep(i, m)
    {
        ll a, b;
        cin >> a >> b;
        arr[a] = false;
        arr[b] = false;
    }
    ll in = 0;
    rep(i, n + 1)
    {
        if (arr[i])
        {
            in = i;
            break;
        }
    }
    cout << n - 1 << '\n';
    for (ll i = 1; i <= n; i++)
    {
        if (i != in)
        {
            cout << i << " " << in << '\n';
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
