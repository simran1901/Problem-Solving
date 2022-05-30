// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1676/E

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    rep(i, n) cin >> arr[i];
    ll queries[q];
    rep(i, q) cin >> queries[i];
    sort(arr.begin(), arr.end(), greater<ll>());
    repn(i, 1, n)
    {
        arr[i] += arr[i - 1];
    }
    rep(i, q)
    {
        if (arr[n - 1] < queries[i])
        {
            cout << -1 << "\n";
        }
        else
        {
            auto upper = upper_bound(arr.begin(), arr.end(), queries[i]);
            int num = upper - arr.begin();
            if (num > 0 && arr[num - 1] >= queries[i])
                num--;
            cout << num + 1 << endl;
        }
    }
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