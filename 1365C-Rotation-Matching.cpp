// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1365/C

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
    ll n;
    cin >> n;
    ll a[n + 1], b[n + 1];
    ll pos[n + 1];
    map<ll, ll> offset;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pos[a[i]] = i;
    }
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    for (int i = 1; i <= n; i++)
    {
        int cur = pos[b[i]] - i;
        if (cur < 0)
            cur += n;
        offset[cur]++;
    }
    ll ans = 0;
    for (auto &it : offset)
        ans = max(ans, it.second);
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}