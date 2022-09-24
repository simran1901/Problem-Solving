// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1702/problem/D

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
    string s;
    cin >> s;
    ll p;
    cin >> p;

    ll n = s.length();

    ll summ = 0;
    vector<pair<char, ll>> vec(n);
    rep(i, n)
    {
        summ += s[i] - 'a' + 1;
        vec[i] = pair<char, ll>(s[i], i);
    }

    sort(vec.begin(), vec.end(), greater<pair<char, ll>>());
    v indices(n);
    ll count = 0;
    rep(i, n)
    {
        if (summ > p)
        {
            indices[count] = vec[count].second;
            summ -= vec[count++].first - 'a' + 1;
        }
    }
    // rep(i, count) cout << indices[i] << endl;

    sort(indices.begin(), indices.begin() + count, greater<ll>());

    rep(i, count) s.erase(indices[i], 1);
    cout << s << endl;
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