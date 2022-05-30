// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1679/problem/B

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
    ll n, q;
    cin >> n >> q;
    ll arr[n];
    ll sum = 0;
    rep(i, n)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    unordered_map<ll, ll> mapp;
    ll all = -1;
    rep(i, q)
    {
        ll query;
        cin >> query;
        if (query == 1)
        {
            ll index, val;
            cin >> index >> val;
            if (mapp.find(index - 1) != mapp.end())
            {
                sum -= mapp[index - 1];
            }
            else if (all != -1)
            {
                sum -= all;
            }
            else
            {
                sum -= arr[index - 1];
            }
            mapp[index - 1] = val;
            sum += val;
            arr[index - 1] = val;
        }
        else
        {
            ll val;
            cin >> val;
            sum = val * n;
            all = val;
            mapp = {};
        }
        cout << sum << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}