// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1702/problem/C

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
    ll n;
    cin >> n;
    ll k;
    cin >> k;
    map<ll, pair<ll, ll>> mapp;
    ll temp;
    rep(i, n)
    {
        cin >> temp;
        if (mapp.find(temp) != mapp.end())
        {
            mapp[temp].second = i;
        }
        else
        {
            mapp[temp].first = i;
            mapp[temp].second = i;
        }
    }
    ll a, b;
    rep(i, k)
    {
        cin >> a >> b;
        if (mapp.find(a) != mapp.end() && mapp.find(b) != mapp.end())
        {
            if (mapp[a].first < mapp[b].second)
                cy;
            else
                cn;
        }
        else
            cn;
    }
}

int main()
{
    IOS;
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}