// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1734/problem/C

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

ll n;
string s;
void solve()
{
    cin >> n;
    cin >> s;

    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] != '1')
        {
            for (ll j = i; j < n; j += i + 1)
            {
                if (s[j] == '1')
                    break;
                if (s[j] == '0')
                {
                    ans += i + 1;
                    s[j] = s[j] + 2;
                }

                // cout << i + 1 << endl;
            }
            // cout<<s<<endl;
        }
    }
    cout << ans << '\n';
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