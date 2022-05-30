// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1364/B

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
    ll n;
    cin >> n;
    ll arr[n];
    rep(i, n) cin >> arr[i];
    ll i = 0;
    bool findMin = false;
    if (arr[0] > arr[1])
    {
        findMin = true;
    }

    ll ans[n];
    ans[0] = arr[0];
    ll count = 1;
    while (i < n - 1)
    {
        if (findMin)
        {
            while (i < n - 1 && arr[i] > arr[i + 1])
            {
                i++;
            }
        }
        else
        {
            while (i < n - 1 && arr[i] < arr[i + 1])
            {
                i++;
            }
        }
        ans[count] = arr[i];
        count++;
        findMin = !findMin;
    }
    cout << count << '\n';
    rep(j, count) cout << ans[j] << " ";
    cout << '\n';
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