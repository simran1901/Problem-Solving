// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1690/problem/E

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
    ll n, k;
    cin >> n >> k;
    v arr(n);
    ll ans = 0;
    rep(i, n)
    {
        cin >> arr[i];
        ans += arr[i] / k;
        arr[i] = arr[i] % k;
    }
    sort(arr.begin(), arr.end());

    multiset<ll> brr(arr.begin(), arr.end());
    rep(i, n)
    {
        ll temp = k - arr[i];
        if (brr.find(arr[i]) != brr.end())
        {
            brr.erase(brr.find(arr[i]));
            auto t = brr.lower_bound(temp);
            if (t != brr.end())
            {
                ll val = (*t);
                brr.erase(brr.find(val));
                ans++;
            }
        }
    }
    cout << ans << endl;
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
