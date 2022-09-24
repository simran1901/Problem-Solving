// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1722/problem/C

#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define repn(i, m, n) for (ll i = m; i <= n; i++)
#define rep(i, n) repn(i, 0, n)
#define pern(i, m, n) for (ll i = m; i >= n; i--)
#define per(i, n) pern(i, n, 0)
#define vl vector<ll>
#define vvl vector<vl>
#define v vector<int>
#define vv vector<v>
#define inpArr(arr, n) \
    rep(i, n)          \
            cin >>     \
        arr[i];
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

ll n;

void solve()
{
    cin >> n;
    string s;
    map<string, vector<ll>> mapp;
    rep(i, 2)
    {
        rep(j, n - 1)
        {
            cin >> s;
            mapp[s].push_back(i);
        }
    }
    vector<ll> ans(3, 0);
    for (auto i : mapp)
    {
        if (i.second.size() == 1)
        {
            ans[i.second[0]] += 3;
        }
        else if (i.second.size() == 2)
        {
            rep(k, 1)
            {
                ans[i.second[k]]++;
            }
        }
    }

    rep(i, 2) cout << ans[i] << ' ';
    cout << '\n';
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