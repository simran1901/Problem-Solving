// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1703/problem/C

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
    v arr(n);
    rep(i, n) cin >> arr[i];
    ll count = 0;
    rep(i, n)
    {
        ll num;
        cin >> num;
        string s;
        cin >> s;
        count = 0;
        rep(j, num)
        {
            if (s[j] == 'D')
                count++;
            else
                count--;
        }
        // cout << count << endl;
        arr[i] += count;

        if (arr[i] < 0)
            arr[i] += 10;
        if (arr[i] >= 10)
            arr[i] -= 10;
    }
    rep(i, n) cout << arr[i] << ' ';
    cout << '\n';
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