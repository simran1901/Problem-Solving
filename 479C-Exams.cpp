// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/479/C

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
    ll n;
    cin >> n;
    vector<pair<ll, ll>> matrix(n);
    rep(i, n)
    {
        cin >> matrix[i].first >> matrix[i].second;
    }

    sort(matrix.begin(), matrix.end());

    ll prev = 0;
    ll mi;
    rep(i, n)
    {
        mi = min(matrix[i].first, matrix[i].second);
        if (prev <= mi)
        {
            prev = mi;
        }
        else
        {
            prev = max(matrix[i].first, matrix[i].second);
        }
    }
    cout << prev << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
