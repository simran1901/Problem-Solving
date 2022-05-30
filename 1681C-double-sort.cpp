// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1681/problem/C

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
    vector<pair<ll, ll>> result;
    unordered_map<ll, ll> mapp;
    vector<pair<ll, ll>> pairs;

    cin >> n;

    ll arr[n];
    rep(i, n)
    {
        cin >> arr[i];
        mapp[arr[i]]++;
    }
    ll brr[n];
    rep(i, n)
    {
        cin >> brr[i];
        mapp[arr[i]]++;
    }

    rep(i, n)
    {
        pairs.push_back({arr[i], brr[i]});
    }
    sort(pairs.begin(), pairs.end());

    rep(i, n)
    {
        if (!(brr[i] == pairs[i].second && arr[i] == pairs[i].first))
        {

            repn(j, i + 1, n)
            {
                if (brr[j] == pairs[i].second && arr[j] == pairs[i].first)
                {
                    swap(arr[i], arr[j]);
                    swap(brr[i], brr[j]);
                    result.push_back({j + 1, i + 1});
                }
            }
        }
    }

    repn(i, 1, n)
    {
        if (!(pairs[i].second >= pairs[i - 1].second && pairs[i].first >= pairs[i - 1].first))
        {
            cout << -1 << '\n';
            return;
        }
    }

    cout << result.size() << "\n";
    for (auto it : result)
    {
        cout << it.first << " " << it.second << "\n";
    }
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