// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1703/problem/B

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
    string s;
    cin >> s;

    v arr(26, 0);
    ll count = 0;
    rep(i, n)
    {
        if (arr[s[i] - 'A'] == 0)
        {
            arr[s[i] - 'A']++;
            count++;
        }
        arr[s[i] - 'A']++;
        count++;
    }
    cout << count << '\n';
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