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
#define pl pair<ll, ll>

using namespace std;

vl coprime(1001);
void solve()
{
    ll n;
    cin >> n;
    ll mx = -1;
    rep(i, 1001)
        coprime[i] = 0;

    ll temp;
    repn(i, 1, n + 1)
    {
        cin >> temp;
        coprime[temp] = max(i, coprime[temp]);
    }
    repn(i, 1, 1001)
    {
        repn(j, 1, 1001) if (__gcd(i, j) == 1 && coprime[i] && coprime[j])
            mx = max(mx, coprime[i] + coprime[j]);
    }
    cout << mx << nl;
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