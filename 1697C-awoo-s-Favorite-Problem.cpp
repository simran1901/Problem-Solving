// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1697/problem/C

#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define pern(i, m, n) for (ll i = m; i >= n; i--)
#define per(i, n) pern(i, n, 0)
#define vl vector<ll>
#define vvl vector<vl>
#define v vector<int>
#define vv vector<v>
#define inpArr(arr, m, n) repn(i, m, n) cin >> arr[i];
#define printArr(arr, m, n) repn(i, m, n) cout << arr[i] << ' ';
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    int n;
    std::cin >> n;

    string s, t;
    cin >> s >> t;

    for (char c : {'a', 'b', 'c'})
    {
        if (std::count(s.begin(), s.end(), c) != std::count(t.begin(), t.end(), c))
        {
            cn;
            return;
        }
    }

    string s1, t1;
    vector<int> a, b;
    rep(i, n)
    {
        if (s[i] != 'b')
        {
            s1 += s[i];
            a.push_back(i);
        }
    }
    rep(i, n)
    {
        if (t[i] != 'b')
        {
            t1 += t[i];
            b.push_back(i);
        }
    }

    if (s1 != t1)
    {
        cn;
        return;
    }

    rep(i, a.size())
    {
        if ((s1[i] == 'a' && a[i] > b[i]) || (s1[i] == 'c' && a[i] < b[i]))
        {
            cn;
            return;
        }
    }

    cy;
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