// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1681/problem/0

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
    ll n, m;
    cin >> n;
    ll arr[n];
    rep(i, n) cin >> arr[i];
    cin >> m;
    ll brr[m];
    rep(i, m) cin >> brr[i];

    ll a = n - 1, b = m - 1;
    ll i = 0;
    ll prev = 0;
    sort(arr, arr + n);
    sort(brr, brr + m);
    while (a >= 0 || b >= 0)
    {
        if (i % 2 == 0)
        {
            // alice turn
            if (a < 0 || arr[a] <= prev)
            {
                cout << "Bob\n";
                break;
            }
            if (arr[a] > prev)
            {
                prev = arr[a];
                a--;
            }
        }
        else
        {
            if (b < 0 || brr[b] <= prev)
            {
                cout << "Alice\n";
                break;
            }
            if (brr[b] > prev)
            {
                prev = brr[b];
                b--;
            }
        }
        i++;
    }

    i = 0;
    prev = 0;
    a = n - 1, b = m - 1;
    while (a >= 0 || b >= 0)
    {
        if (i % 2 == 0)
        {
            // bob turn

            if (b < 0 || brr[b] <= prev)
            {
                cout << "Alice\n";
                break;
            }
            if (brr[b] > prev)
            {
                prev = brr[b];
                b--;
            }
        }
        else
        {
            if (a < 0 || arr[a] <= prev)
            {
                cout << "Bob\n";
                break;
            }
            if (arr[a] > prev)
            {
                prev = arr[a];
                a--;
            }
        }
        i++;
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