// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/538/B

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
    string sn = to_string(n);
    int len = sn.length();
    v arr(len);
    rep(i, len)
    {
        arr[i] = sn[i] - '0';
    }
    v res;
    ll ans = 0;
    while (n > 0)
    {
        ans = 0;
        rep(i, len)
        {
            ans *= 10;
            if (arr[i] > 0)
            {
                ans++;
                arr[i]--;
            }
        }
        n -= ans;
        res.push_back(ans);
    }

    cout << res.size() << endl;
    for (auto ch : res)
    {
        cout << ch << " ";
    }
    cout << endl;
}

int main()
{
    IOS;

    solve();

    return 0;
}