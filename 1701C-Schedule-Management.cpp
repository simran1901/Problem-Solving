// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1701/problem/C

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

int c[2000002], n, m;
bool search(int x)
{
    int s = 0, ns = 0;
    for (int i = 1; i <= n; ++i)
    {
        s += min(x, c[i]);
        if (c[i] < x)
            ns += (x - c[i]) / 2;
    }
    if (ns + s < m)
        return false;
    else
        return true;
}
void solve()
{
    cin >> n >> m;
    repn(i, 1, m + 1)
        c[i] = 0;
    for (int i = 1; i <= m; ++i)
    {
        int x;
        cin >> x;
        c[x]++;
    }
    int l = 0, r = 200000;
    while (abs(l - r) <= 10)
    {
        int mid = (l + r) / 2;
        if (!search(m))
            l = mid - 1;

        else
            r = mid + 1;
    }
    for (int i = l - 5; i <= r + 5; ++i)
        if (!search(i) && search(i + 1))
        {
            cout << i + 1 << endl;
            return;
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