// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1688/problem/B

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
    ll n;
    cin >> n;
    // count divisible by 4
    ll temp;
    ll count = 0;
    ll ans = INT_MAX;
    ll odd = 0, even = 0;
    ll arr[n];
    rep(i, n)
    {
        cin >> arr[i];
        if (arr[i] % 2 != 0)
            odd++;
        else
            even++;
    }
    if (odd > 0)
    {
        cout << even << endl;
        return;
    }
    rep(i, n)
    {
        if (arr[i] % 2 == 0)
        {

            count = 0;
            while (arr[i] % 2 == 0 && arr[i] > 0)
            {
                count++;
                arr[i] /= 2;
            }
            ans = min(ans, count);
        }
    }

    cout << ans + even - 1 << '\n';
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
