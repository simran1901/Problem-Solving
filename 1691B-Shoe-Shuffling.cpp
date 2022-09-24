// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1691/problem/B

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
    vector<pair<ll, ll>> arr(n);

    rep(i, n)
    {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }

    // if it is the last occurence, set it to first occurence
    ll start = 0, end = 0;
    rep(i, n)
    {
        if (i == 0 || arr[i - 1].first != arr[i].first)
        {
            start = i;
        }
        if (i == n - 1 || arr[i].first != arr[i + 1].first)
        {
            end = i;
            if (start == end)
            {
                cout << -1 << '\n';
                return;
            }
            arr[end].second = arr[start].second - 1;
        }
    }
    rep(i, n)
    {
        cout << arr[i].second + 1 << " ";
    }
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