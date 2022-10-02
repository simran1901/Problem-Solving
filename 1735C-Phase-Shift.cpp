// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1735/problem/A

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
#define nl '\n'

using namespace std;

int par[26];
int find(int x)
{
    return x == par[x] ? x : (par[x] = find(par[x]));
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> to(26, -1);
    vector<bool> tag(26);
    iota(par, par + 26, 0);
    int cnt = 0;

    for (int i = 0; i < n; ++i)
    {
        int x = s[i] - 'a';
        if (to[x] == -1)
        {
            for (int y = 0; y < 26; ++y)
            {
                if (!tag[y])
                {
                    if (cnt == 25)
                    {
                        to[x] = y;
                        tag[y] = true;
                        break;
                    }
                    else
                    {
                        if (find(x) != find(y))
                        {
                            to[x] = y;
                            tag[y] = true;
                            par[find(x)] = find(y);
                            break;
                        }
                    }
                }
            }
            ++cnt;
        }
        s[i] = char(to[x] + 'a');
    }
    cout << s << nl;
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