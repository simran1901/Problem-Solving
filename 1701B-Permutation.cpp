// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1701/problem/B

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
    cout << 2 << endl;
    ll mul = 2;
    ll num = 1;

    vector<bool> visited(n + 1, false);
    for (ll i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            // cout << i << ' ';
            ll temp = i;
            // cout << temp << ' ';
            while (temp <= n && !visited[temp])
            {

                cout << temp << ' ';

                visited[temp] = true;
                temp *= 2;
            }
            // visited[i] = true;
        }
    }
    cout << endl;
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