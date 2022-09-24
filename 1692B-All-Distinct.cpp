// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1692/problem/B

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

    unordered_map<int, int> mapp;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mapp[arr[i]]++;
    }
    ll ans = 0;
    for (auto it : mapp)
    {
        if (it.second > 1)
        {
            ans += it.second - 1;
        }
    }

    if (ans % 2 == 0)
        cout << n - ans << '\n';
    else
        cout << n - ans - 1 << '\n';
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
