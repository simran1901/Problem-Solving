// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1332/B

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

int n,t;
vector<int> ans[1007];
int res[1007];

void solve()
{
    auto f = [&](int u)
    {
        for (int i = 2; i <= u; ++i)
        {
            if (u % i == 0)
                return i;
        }
        return 1;
    };
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= 1000; ++i)
            ans[i].clear();
        for (int i = 1; i <= n; ++i)
        {
            int u;
            cin >> u;
            ans[f(u)].push_back(i);
        }
        int ret = 0;
        for (int i = 1; i <= 1000; ++i)
        {
            if (ans[i].size())
            {
                ++ret;
                for (auto c : ans[i])
                {
                    res[c] = ret;
                }
            }
        }
        cout << ret << "\n";
        for (int i = 1; i <= n; ++i)
        {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    IOS;

    solve();

    return 0;
}