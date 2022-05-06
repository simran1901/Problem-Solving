// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1675/problem/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    int n;
    cin >> n;
    ll arr[n];
    rep(i, n) cin >> arr[i];
    ll moves = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
            continue;
        if (arr[i + 1] == 0)
        {
            cout << -1 << "\n";
            return;
        }
        ll temp = arr[i] / arr[i + 1];
        ll res = log(temp) / log(2);
        ll po = pow(2, res);
        arr[i] = arr[i] / po;
        moves += res;
        if (arr[i] < arr[i + 1])
        {
            continue;
        }
        else
        {
            arr[i] /= 2;
            moves++;
        }
        if (arr[i] == arr[i + 1])
        {
            cout << -1 << "\n";
            return;
        }
    }
    cout << moves << "\n";
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