// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1324/D

#include <bits/stdc++.h>
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
    ll temp;
    ll ans = 0;
    rep(i, n)
    {
        cin >> temp;
        arr[i] -= temp;
    }
    sort(arr.begin(), arr.end());
    // rep(i, n) cout << arr[i] << " ";
    rep(i, n)
    {
        // if not positive
        if (arr[i] <= 0)
        {
            auto it = upper_bound(arr.begin(), arr.end(), abs(arr[i]));
            if (it != arr.end())
                ans += n - (it - arr.begin());
        }
        else
            ans += n - 1 - i;
    }
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}