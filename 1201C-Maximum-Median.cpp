// Codeforces
// Author: simranmakhijani55
//

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
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    rep(i, n) cin >> arr[i];
    sort(arr, arr + n);
    ll base = n / 2;

    ll temp = 0, ind = n - base;
    ll t = n - 1;
    repn(i, 1, base + 1)
    {
        if (temp + (arr[base + i] - arr[base + i - 1]) * i > k)
        {
            t = base + i - 1;
            break;
        }
        temp = temp + (arr[base + i] - arr[base + i - 1]) * i;
    }
    arr[base] = arr[t] + (k - temp) / (t - base + 1);
    cout << arr[base] << '\n';
}

int main()
{
    IOS;

    solve();

    return 0;
}