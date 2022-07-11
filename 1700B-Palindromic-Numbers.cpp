// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1700/problem/B

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
    string s;
    cin >> s;
    string t = "9" + string(n - 2, '0') + "1";
    vector<int> a(n + 1, 0);
    a[0] = 1;
    a[n] = 1;
    if (s > t)
    {
        a.assign(n + 1, 1);
    }
    for (int j = 0; j < n; j++)
    {
        a[j] -= s[n - 1 - j] - '0';
    }
    for (int j = 0; j < n; j++)
    {
        if (a[j] < 0)
        {
            a[j] += 10;
            a[j + 1]--;
        }
    }
    for (int j = n - 1; j >= 0; j--)
    {
        cout << a[j];
    }
    cout << endl;
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
