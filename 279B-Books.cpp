// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/279/B

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
    ll n, t;
    cin >> n >> t;
    ll arr[n];
    rep(i, n) cin >> arr[i];
    ll mx = 0;
    ll start = 0, end = 0, sum = 0;
    bool flag = false;
    rep(i, n)
    {
        if (sum + arr[i] <= t)
        {
            // include it
            sum += arr[i];
            end = i;
            flag = true;
        }
        else if (sum + arr[i] > t && arr[i] <= t)
        {
            sum += arr[i];
            end = i;
            while (sum > t && start < end)
            {
                sum -= arr[start];
                start++;
            }
            flag = true;
        }
        else if (arr[i] > t)
        {
            end = i + 1;
            start = i + 1;
            sum = 0;
        }
        // cout << end << " " << start << endl;
        mx = max(mx, end - start);
    }
    if (!flag)
    {
        mx = -1;
    }
    cout << mx + 1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
