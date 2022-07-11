// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1420/problem/C1

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n";
#define cn cout << "NO\n";

using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    rep(i, n) cin >> arr[i];
    // find highest and lowest peaks alternatively

    ll ans = 0;
    bool flag = true;
    rep(i, n)
    {
        if (flag)
        {
            if ((i == 0 && arr[i + 1] < arr[i]) || (i == n - 1 && arr[i - 1] < arr[i]) || (arr[i] > arr[i + 1] && arr[i] > arr[i - 1]))
            {
                ans += arr[i];
                flag = !flag;
            }
        }
        else
        {
            if (i > 0 && i < n - 1 && arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
            {
                ans -= arr[i];
                flag = !flag;
            }
        }
    }
    if (n == 1)
        ans += arr[0];
    cout << ans << '\n';
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